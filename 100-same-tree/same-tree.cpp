class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL) {
            return true;
        }

        if (p == NULL || q == NULL) {
            return false;
        }

        if (p->val != q->val) {
            return false;
        }

        bool leftTree = isSameTree(p->left, q->left);
        bool rightTree = isSameTree(p->right, q->right);

        return leftTree && rightTree;
    }
};