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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        if (root)
        {
            if(root->left)postorderTraversal(root->left);
            if(root->right)postorderTraversal(root->right);
            values.emplace_back(root->val);
        }
        return values;
    }
};