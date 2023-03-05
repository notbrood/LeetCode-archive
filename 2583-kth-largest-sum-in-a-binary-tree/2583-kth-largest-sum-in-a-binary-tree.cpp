/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
    vector<long long> summ;
public:
    
    long long kthLargestLevelSum(TreeNode* root, int k) {
    int n = 100001;
        for(int i = 0; i<n; i++){
            summ.push_back(0);
        }
        help(root, 0);
        vector<long long> sums;
        
        for(int i = 0; i<100001; i++){
            if(summ[i] == 0) break;
            sums.push_back(summ[i]);
        }
        if(sums.size() < k){
            return -1;
        }
        sort(sums.begin(),sums.end());
        return sums[sums.size()-k];
    }
    void help(TreeNode* root, int k){
        if(root == NULL){
            return ;
        }
        summ[k] += root -> val;
        help(root -> left, k+1);
        help(root -> right, k+1);
    }
    
};