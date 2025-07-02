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
    int minDiffInBST(TreeNode* root) {
        vector<int> res; 
        nihaha(root, res); 
        sort(res.begin(), res.end()); 
        int min = res[res.size()-1]; 
        for(int i = 0; i<res.size()-1; i++){
            if((res[i+1]-res[i]) < min) min = res[i+1]-res[i]; 
        }
        return min; 
    }

    void nihaha(TreeNode* root, vector<int> &v){
        //if(!root->left && !root->right) {return; }
        v.push_back(root->val); 
        if(root->left) nihaha(root->left, v); 
        if(root->right) nihaha(root->right, v);
        return; 

    }
};