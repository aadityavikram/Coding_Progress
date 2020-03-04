// https://leetcode.com/problems/invert-binary-tree/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    TreeNode* invertTree(TreeNode* root) {
        fastIO();
        if(root!=NULL){
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
        }
        return root;
    }
