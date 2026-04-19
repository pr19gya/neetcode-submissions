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
    bool validBST(TreeNode* root, long left, long right) {
        if(!root) return true;
        
        if(!(left < root -> val && root -> val < right)) {
            return false;
        }
        
        return validBST(root->left, left, root -> val) 
                && validBST(root -> right, root -> val, right);
        
    }
    bool isValidBST(TreeNode* root) {
        return validBST(root, LONG_MIN, LONG_MAX);
    }
};
