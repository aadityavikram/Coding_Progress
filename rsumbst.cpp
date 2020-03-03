// https://leetcode.com/problems/range-sum-of-bst/

int rangeSumBST(TreeNode* root, int L, int R) {
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
        if(root==NULL) return 0;
        if(root->val<L) return rangeSumBST(root->right,L,R);
        else if(root->val>R) return rangeSumBST(root->left,L,R);
        return root->val+rangeSumBST(root->left,L,R)+rangeSumBST(root->right,L,R);
    }
