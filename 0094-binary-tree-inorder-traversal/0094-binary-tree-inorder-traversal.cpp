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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if(!root) return {};
        vector<int> left = inorderTraversal(root->left);
        result.push_back(root->val);
        vector<int> right = inorderTraversal(root->right);

        result.insert(result.begin(),left.begin(),left.end());
        result.insert(result.end(),right.begin(),right.end());
        return result;
    }
};