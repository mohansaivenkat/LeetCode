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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if (root == NULL) return {};
        
        q.push(root);
        int level = 0;
        
        while (q.size() > 0) {
            int size = q.size();
            vector<int> cans;

            for (int i = 0; i < size; i++) {
                cans.push_back(q.front()->val);
                TreeNode* front = q.front();
                if (front->left != NULL) {
                    q.push(front->left);
                }
                if (front->right != NULL) {
                    q.push(front->right);
                }
                q.pop();
            }

            if (level % 2 == 1) {
                reverse(cans.begin(), cans.end());
            }
            
            ans.push_back(cans);
            level++;
        }
        
        return ans;
    }
};