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
    vector<int>values;
public:
    Solution(){values.reserve(100);}
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if (root)
        {
            if(root->left)inorderTraversal(root->left);
            values.emplace_back(root->val);
            if(root->right)inorderTraversal(root->right);
        }
        return values;
    }
};