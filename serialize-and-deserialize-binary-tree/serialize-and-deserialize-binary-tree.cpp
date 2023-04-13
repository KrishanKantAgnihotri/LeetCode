/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "$";
        return to_string(root->val)+","+serialize(root->left)+","+serialize(root->right);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        return de(data);
    }
    TreeNode* de(string &s){
        if(s[0] == '$'){
            if(s.size()>1) s = s.substr(2);
            return NULL;
        }
        TreeNode* node = new TreeNode(conv(s));
        node->left = de(s);
        node->right = de(s);
        return node;
    }
    private:
    int conv(string &s){
        int p = s.find(',');
        string ans = s.substr(0,p);
        s = s.substr(p+1);
        return stoi(ans);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));