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
    int check(TreeNode* root, int k = 0) {
        if (root == nullptr) return k;
        return max(check(root->left, k + 1), check(root->right, k + 1));
    }
public:
    int maxDepth(TreeNode* root) {
        return check(root);
    }
};