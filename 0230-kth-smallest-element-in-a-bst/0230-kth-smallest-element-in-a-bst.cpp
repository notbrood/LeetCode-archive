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
    vector<int> elements;
public:
    int kthSmallest(TreeNode* root, int k) {
        getEle(root);
        sort(elements.begin(), elements.end());
        return elements[k-1];
    }
    void getEle(TreeNode* node){
        if(node == NULL){
            return;
        }
        elements.push_back(node -> val);
        getEle(node -> left);
        getEle(node -> right);
    }
};