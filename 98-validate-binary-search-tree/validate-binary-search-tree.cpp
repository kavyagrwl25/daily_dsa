class Solution {
public:
    bool validate(TreeNode* root, long minVal, long maxVal) {
        if (root == NULL) return true;

        if (root->val <= minVal || root->val >= maxVal)
            return false;

        return validate(root->left, minVal, root->val) &&
               validate(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};