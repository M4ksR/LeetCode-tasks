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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        queue<TreeNode*> wait;
        wait.push(root);

        int k = 0;
        while (!wait.empty()) {
            int size = wait.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* node = wait.front();
                wait.pop();
                if (node->left == nullptr && node->right == nullptr) {
                    return k + 1;
                }
                if (node->left != nullptr) wait.push(node->left);
                if (node->right != nullptr) wait.push(node->right);
            }
            ++k;
        }
        
        return k;
    }
};