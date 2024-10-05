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
private:
    vector<int> values;     
public:
    Solution(){values.reserve(100);}
    vector<int> preorderTraversal(TreeNode* root) {
        if (root)
        {
            values.emplace_back (root -> val);
            if (root->left)preorderTraversal(root -> left);
            if (root->right)preorderTraversal(root -> right);
        }
        return values;
        
    }
};