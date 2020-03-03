// https://leetcode.com/problems/maximum-depth-of-binary-tree/

int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
