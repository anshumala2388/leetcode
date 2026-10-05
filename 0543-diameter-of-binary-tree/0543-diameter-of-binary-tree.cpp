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
    int height1(TreeNode*r){
        if(r==NULL){
            return 0;
        }
        int l1=height1(r->left);
        int l2=height1(r->right);
        return max(l1,l2)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int left1=diameterOfBinaryTree(root->left);
        int right1=diameterOfBinaryTree(root->right);
        int currheight=height1(root->left)+height1(root->right);
        return max(currheight,max(left1,right1));

    }
};