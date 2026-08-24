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
       
       // base case 1 (same)
       if (p == nullptr && q == nullptr) {
        return true;
       }

       // base case 2 (diff)
       if (p == nullptr || q == nullptr) {
        return false;
       }
       
       // not equal
       if (p->val != q->val) {
        return false;
       }
       
       // DFS on the next layer
       bool left = isSameTree(p->left,q->left);
       bool right = isSameTree(p->right, q->right);

       return left && right;

    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // base case 
        if (root == nullptr) {
            return false;
        }

        if (isSameTree(root, subRoot)) {
            return true;
        } else {
            if (isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot)) {
                return true;
            }
        }

        return false;
    }
};
