class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int big = 0;
        for(int i = 0; i<arr.size()-1; i++){
            int a = arr[i];
            if(a < big){
                arr[i] = big;
                continue;
            }
            int c = 0;
            for(int j = i+1; j<arr.size(); j++){
                if(arr[j] > c){
                    c = arr[j];
                }
            }
            arr[i] = c;
            big = c;
        }
        arr[arr.size()-1] = -1;
        return arr;
    }
};