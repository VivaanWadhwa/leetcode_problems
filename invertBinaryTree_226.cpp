struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void helper(TreeNode* node) {
        if ((node->left == nullptr) && (node->right == nullptr)) return;
        if (node->left != nullptr) helper(node->left);
        if (node->right != nullptr) helper(node->right);
        TreeNode *temp = node->left;
        node->left = node->right;
        node->right = temp;
        return;
    }

    TreeNode* invertTree(TreeNode* root) {
        if (root==nullptr) return root;
        helper(root);
        return root;
    }
};
