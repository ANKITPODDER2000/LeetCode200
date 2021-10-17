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
    bool func(TreeNode* p , TreeNode* q){
        if(!p && !q) return true;
        else if((!p || !q) || (p->val != q->val)) return false;
        return func(p->left , q->right) && func(p->right , q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return func(root->left , root->right);
    }
};
