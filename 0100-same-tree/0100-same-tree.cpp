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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true; 
        if(((bool)p) ^ ((bool)q)) return false; 
        bool cond1 = ((bool)p->right) ^ ((bool)q->right), cond2 = ((bool)q->left) ^ ((bool)p->left); 
        if((cond1) || (cond2) ) return false; 
        if(p->val == q->val ){
            bool left = true; 
            if((p->left && q->left)) left = isSameTree(p->left, q->left) ;

            bool right = true;
            if((p->right && q->right)) right = isSameTree(p->right, q->right) ; 
            return true && right && left; 
        } else{ 
            cout << p->val << " " << q->val << endl; 
            return false; 

        }
    }
};