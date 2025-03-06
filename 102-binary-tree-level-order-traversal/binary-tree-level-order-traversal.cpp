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
    void levelorderres(TreeNode* root, int level, vector<vector<int>>& res){
        if(root == NULL) return ;
        if(res.size() <= level) res.push_back({});
        res[level].push_back(root->val);
        levelorderres(root->left, level+1, res);
        levelorderres(root->right, level+1, res);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        levelorderres(root, 0, res);
        return res;
    }
};