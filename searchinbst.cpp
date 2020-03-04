// https://leetcode.com/problems/search-in-a-binary-search-tree/

TreeNode* searchBST(TreeNode* root, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(root==NULL) return NULL;
        if(root->val==val) return root;
        return (val<root->val)?searchBST(root->left,val):searchBST(root->right,val);
        return NULL;
    }
