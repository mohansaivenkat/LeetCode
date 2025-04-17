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
    vector<string> res;
    string s="";
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        func(root);
        return res;
    }

    void func(TreeNode* root){
        if (root == NULL) return; 

        string prev = s;
        if (!s.empty()) s += "->"; 
        s += to_string(root->val);

        if (root->left == NULL && root->right == NULL) {
            res.push_back(s);
        } else {
            func(root->left);
            func(root->right);
        }

        s = prev; 
    }
};