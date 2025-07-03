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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res = 0; 
        somme(root, low, high, res);
        return res; 
    }

    void somme(TreeNode* node,int &low, int &high , int &res){
        if(node->val <= high && node->val >=low) res += node->val; 
        if(node->left) somme(node->left, low, high, res);
        if(node->right) somme(node->right, low, high, res);
        return; 
    }
};