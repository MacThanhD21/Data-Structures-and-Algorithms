/**
 @author Farheen Bano
  
 References-
 https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/
 https://leetcode.com/problems/binary-tree-inorder-traversal/
*/

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
    vector<int> result;
    vector<int> inorderTraversal(TreeNode* root) {
        return inorder(root);
    }
    
    vector<int> inorder(TreeNode* root){
        if(root==NULL){
            return result;
        }
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);

        return result;
    }
};
