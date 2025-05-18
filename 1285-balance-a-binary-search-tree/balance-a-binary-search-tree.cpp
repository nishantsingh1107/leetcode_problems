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
    vector<TreeNode*> arr;
    void inorder(TreeNode* root){
        if(root == NULL) return;
        inorder(root->left);
        arr.push_back(root);
        inorder(root->right);
    }
    TreeNode* sortedToBST(int left, int right){
        if(left > right) return NULL;
        int mid = (left + right)/2;
        TreeNode* root = arr[mid];
        root->left = sortedToBST(left, mid-1);
        root->right = sortedToBST(mid+1, right);
        return root;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return sortedToBST(0, arr.size()-1);
    }
};