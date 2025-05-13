// Inorder Traversal - Recursive
class Solution {
public:
    void inorderHelper(TreeNode* node, vector<int>& result) {
        if (!node) return;
        inorderHelper(node->left, result);           // Traverse left
        result.push_back(node->val);                 // Visit root
        inorderHelper(node->right, result);          // Traverse right
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorderHelper(root, result);
        return result;
    }
};
