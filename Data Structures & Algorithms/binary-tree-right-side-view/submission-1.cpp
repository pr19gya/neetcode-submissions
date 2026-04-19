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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> rightView;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()) {
            int size = q.size();
            vector<int> temp;

            while(size > 0) {
                TreeNode* top = q.front();
                q.pop();
                temp.push_back(top -> val);

                if(top -> right) {
                    q.push(top -> right);
                }
                if(top -> left) {
                    q.push(top -> left);
                }

                size--;
            }

            rightView.push_back(temp[0]);
        }

        return rightView;
    }
};
