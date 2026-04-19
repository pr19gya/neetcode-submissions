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
    void inorder(TreeNode* root, vector<int> &inorderList) {
        if(!root) return;

        inorder(root -> left, inorderList);
        inorderList.push_back(root -> val);
        inorder(root -> right, inorderList);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> inorderList;

        inorder(root, inorderList);

        return inorderList[k-1];
    }
};
