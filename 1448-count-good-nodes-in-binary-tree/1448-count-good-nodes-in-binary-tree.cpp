class Solution {
private:
    int count = 0;
public:
    int goodNodes(TreeNode* root) {
        help(root, INT_MIN);
        return count;
    }
    void help(TreeNode* root, int max){
        if(root == NULL){
            return ;
        }
        if(root -> val >= max){
            count++;
            max = root -> val;
        }
        help(root -> left, max);
        help(root -> right, max);
    }
};