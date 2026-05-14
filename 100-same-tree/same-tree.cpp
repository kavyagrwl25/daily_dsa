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

    bool isSame(TreeNode* p, TreeNode* q, bool &ans, int &flag){
        if(p == NULL && q != NULL){ 
            ans = false;
            flag = 0;
            return false;
        }
        else if(q == NULL && p != NULL){ 
            ans = false;
            flag = 0;
            return false;
        }
        else if(q == NULL && p == NULL){ 
            ans = true;
            return true;
        }

        bool leftTree = isSame(p->left, q->left, ans, flag);
        bool rightTree = isSame(p->right, q->right, ans, flag);

        if(p->val != q->val){
            ans = false;
            flag = 0;
        }

        return ans;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int flag = 1;
        bool ans = true;
        isSame(p, q, ans, flag);
        return flag;
    }
};