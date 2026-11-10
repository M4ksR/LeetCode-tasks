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
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;
        queue<TreeNode*> wait;
        wait.push(root);
        while (!wait.empty()) {
            int size = wait.size();
            for (int i = 0; i < size; ++i) {
                TreeNode* currNode = wait.front();
                wait.pop();
                
                swap(currNode->left, currNode->right);

                if (currNode->left != nullptr) wait.push(currNode->left);
                if (currNode->right != nullptr) wait.push(currNode->right);
            }
        }
        return root;
    }
};