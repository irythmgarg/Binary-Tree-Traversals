// Level Order Traversal (BFS using Queue)
class Solution {
public:
    vector<vector<int>> levelOrderTraversal(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> level;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* current = q.front();
                q.pop();
                level.push_back(current->val);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            result.push_back(level);
        }

        return result;
    }
};
