/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode * x;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int val = target->val;
        TreeNode * ans;
        ans = trav(cloned,val);
        return x;
    }
    TreeNode* trav(TreeNode* cloned, int val){
        if(cloned==nullptr) return cloned;
        if(cloned->val==val) {x = cloned;return cloned;}
        trav(cloned->left,val);
        trav(cloned->right,val);
        return cloned;
    }
};
