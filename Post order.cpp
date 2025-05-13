// Postorder Traversal - Recursive
class Solution {
public:
    void postorderHelper(TreeNode* node, vector<int>& result) {
        if (!node) return;
        postorderHelper(node->left, result);         // Traverse left
        postorderHelper(node->right, result);        // Traverse right
        result.push_back(node->val);                 // Visit root
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderHelper(root, result);
        return result;
    }
};
