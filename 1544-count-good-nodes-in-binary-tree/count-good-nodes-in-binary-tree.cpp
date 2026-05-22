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

    void traverse(TreeNode* root, int val, int &count){
        if(root == NULL) return ;
        if(root->val >= val) count ++;
        val = max(val, root->val);
        traverse(root->left, val, count);
        traverse(root->right, val, count);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        traverse(root, root->val,count);
        return count;
    }
};