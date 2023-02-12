class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        long long ans = 0;
        while(i <= j){
            if(i == j){
                long long temp = nums[i];
                ans = ans + temp;
                break;
            }
            long long temp = concetanate(nums[i], nums[j]);
            i++;
            j--;
            ans =ans+ temp;
        }
        return ans;
    }
    long long concetanate(int a, int b){
        string A = changeToStr(a);
        string B = changeToStr(b);
        string C = A+B;
        long long c = changeToInt(C);
        return c;
        
    }
    string changeToStr(int a){
        string ans = "";
        while(a){
            ans += (a%10 +'0');
            a=a/10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    long long changeToInt(string A){
        long long ans = 0;
        for(int i = 0; i<A.length(); i++){
            ans = ans*10 + (A[i]-'0');
        }
        return ans;
    }
};