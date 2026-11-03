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
    TreeNode* createNode(int val){
        TreeNode* newNode= new TreeNode;
        newNode->val=val;
        newNode->left=nullptr;
        newNode->right=nullptr;
        return newNode;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return createNode(val);
        }
        if(val<root->val){
            root->left=insertIntoBST(root->left,val);
        }
        else if(val>root->val){
            root->right=insertIntoBST(root->right,val);
        }
        return root;
    }
};