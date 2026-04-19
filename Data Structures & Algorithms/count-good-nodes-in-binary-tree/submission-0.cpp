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
    int findGoodNodes(TreeNode* root, int greatest) {
        if(!root) return 0;

        int res = (root -> val >= greatest) ? 1 : 0;
        greatest = max(root -> val, greatest);
        res += findGoodNodes(root -> left, greatest);
        res += findGoodNodes(root -> right, greatest);
        return res;

    }

    int goodNodes(TreeNode* root) {

        return findGoodNodes( root, root -> val);
    }
};
