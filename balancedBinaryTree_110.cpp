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

 struct returnVal {
    bool balanced;
    int height;
 };

class Solution {
public:
    returnVal dfs(TreeNode* node) {
        if (node == nullptr) return (returnVal){true, 0};
        returnVal left = dfs(node->left);
        returnVal right = dfs(node->right);
        bool balanced = left.balanced and right.balanced and (abs(left.height - right.height) <= 1);
        returnVal ret = {balanced, 1 + max(left.height, right.height)};
        return ret;
    };

    bool isBalanced(TreeNode* root) {
        returnVal ret = dfs(root);
        return ret.balanced;
    }
};
