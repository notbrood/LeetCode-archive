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
public:
    string serial(TreeNode* root){
        if(!root) return "*";
        string left = serial(root -> left);
        string right = serial(root -> right);
        string s = left + '.' + right + '.' + to_string(root -> val);
        if(mpp[s] == 1){
            ans.push_back(root);
        }
        mpp[s]++;
        return s;
    }
    vector<TreeNode*> ans;
    unordered_map<string, int> mpp;
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        if(!root) return ans;
        serial(root);
        return ans;
    }
    
};