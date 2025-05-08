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
    void convertedTree(TreeNode* root, int& sum){
        if(root == NULL) return;
        convertedTree(root->right, sum);
        root->val += sum;
        sum = root->val;
        convertedTree(root->left, sum);

    }
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        convertedTree(root, sum);
        return root;
    }
};