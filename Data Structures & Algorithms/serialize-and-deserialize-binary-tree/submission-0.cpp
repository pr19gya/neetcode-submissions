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

class Codec {
public:
    void preorder(TreeNode* root, string& send) {
        if(!root) {
            send += "null,";
            return;
        }

        send += to_string(root->val) + ",";
        preorder(root->left,send);
        preorder(root->right,send);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string send = "";

        preorder(root,send);
        cout<<send<<endl;
        return send;
    }

    TreeNode* buildTree(queue<string>& q) {
        string current = q.front();
        q.pop();

        if(current == "null") return nullptr;

        TreeNode* root = new TreeNode(stoi(current));
        root -> left = buildTree(q);
        root -> right = buildTree(q);
        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        queue<string> q;
        string temp = "";

        for( char c : data) {
            if(c == ',') {
                q.push(temp);
                temp = "";
            }
            else{
                temp += c;
            }
        }

        return buildTree(q);

    }
};
