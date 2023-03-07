class Solution {
public:
    void flatten(TreeNode* root) {
        if (root != nullptr) help(root);
    }
TreeNode* head = nullptr;
    void help(TreeNode* node) {
        if (node->right) help(node->right);
        if (node->left) help(node->left);
        node->left = nullptr;
        node->right = head;
        head = node;
    }
};
