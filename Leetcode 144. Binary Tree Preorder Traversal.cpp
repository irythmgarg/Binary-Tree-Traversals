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
    // Helper function to perform preorder traversal (Root -> Left -> Right)
    void preorderHelper(TreeNode* node, vector<int>& traversal) {
        if (!node)
            return;

        // Visit the current node
        traversal.push_back(node->val);

        // Traverse the left subtree
        preorderHelper(node->left, traversal);

        // Traverse the right subtree
        preorderHelper(node->right, traversal);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> traversalResult;

        // Start the preorder traversal from the root
        preorderHelper(root, traversalResult);

        return traversalResult;
    }
};
