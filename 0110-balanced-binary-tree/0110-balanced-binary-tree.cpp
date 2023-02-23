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
    bool isBalanced(TreeNode* root) {
        if(depth(root) >= 0) return true;
        return false;
    }
    int depth(TreeNode* node){
        if(node == NULL) return 0;
        int x = depth(node -> left) + 1;
        int y = depth(node -> right) + 1;
        if(x < 1 || y < 1 || abs(x-y) > 1) return -1;
        return max(x, y);
    }
    
};