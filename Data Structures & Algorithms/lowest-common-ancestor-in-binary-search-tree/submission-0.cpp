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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return nullptr;
        if(!p && !q) return nullptr;
        if(!p) return q;
        if(!q) return p;

        if(root->val == p->val || root->val == q->val) {
            return root;
        }
        else if((root->val > p->val && root->val < q->val) || (root->val < p->val && root->val > q->val)) return root;
        else{
            TreeNode* l = lowestCommonAncestor(root->left,p,q);
            if(l) return l;
            TreeNode* right = lowestCommonAncestor(root->right,p,q);
            if(right) return right;
        }
    }
};
