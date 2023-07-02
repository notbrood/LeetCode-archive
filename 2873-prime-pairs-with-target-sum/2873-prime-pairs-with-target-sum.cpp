class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> primes = simpleSieve(n);
        unordered_map<int, bool> mpp;
        for(int i = 0; i<primes.size(); i++){
            mpp[primes[i]] = true;
        }
        vector<vector<int>> ansVec;
        for(auto i : primes){
            if(mpp[n-i]){
                if(i < n-i){
                    ansVec.push_back({i, n-i});
                }
            }
        }
        if(mpp[n/2]){
            if(n/2 + n/2 == n){
                ansVec.push_back({n/2, n/2});
            }
        }
        return ansVec;
        
    }
    
    vector<int> simpleSieve(int n){
        bool prime[n + 1];
        vector<int> primes;
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for(int i = 2; i<=n; i++){
            if(prime[i]) {primes.push_back(i);}
        }
        return primes;
    }
};