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

    bool isSame(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot == NULL){
            return true;
        }
        if(root == NULL || subRoot == NULL){
            return false;
        }
        if(root->val != subRoot->val){
            return false;
        }
        return isSame(root->left, subRoot->left) && isSame(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL || subRoot == NULL){
            return false;
        }
        if(isSame(root, subRoot)){
            return true;
        }
        bool ansLeft = isSubtree(root->left, subRoot);
        bool ansRight = isSubtree(root->right, subRoot);
        return ansLeft || ansRight;
    }
};