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
    void helper(TreeNode* root, int k, int& result, int& cnt){
        if(root == NULL || cnt >= k) return;
        helper(root->left, k, result, cnt);
        cnt++;
        if(cnt == k){
            result = root->val;
            return;
        }
        helper(root->right, k, result, cnt);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int cnt = 0, result = INT_MIN;
        helper(root, k, result, cnt);
        return result;
    }
};