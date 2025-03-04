/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void preord(Node* root, vector<int>& res){
        if(!root) return;
        res.push_back(root->val);
        for(auto child:root->children){
            preord(child, res);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        preord(root, res);
        return res;
    }
};