// 

// Solution 1: -
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL && t2==NULL) return NULL;
        int first=0,second=0;
        if(t1!=NULL) first=t1->val;
        if(t2!=NULL) second=t2->val;
        TreeNode* t=new TreeNode(first+second);
        TreeNode *firstNode=NULL, *secondNode=NULL;
        if(t1!=NULL) firstNode=t1->left;
        if(t2!=NULL) secondNode=t2->left;
        t->left=mergeTrees(firstNode, secondNode);
        firstNode=NULL, secondNode=NULL;
        if(t1!=NULL) firstNode=t1->right;
        if(t2!=NULL) secondNode=t2->right;
        t->right=mergeTrees(firstNode, secondNode);
        return t;
    }
    
// Solution 2: - (shorter)
TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==NULL && t2==NULL) return NULL;
        TreeNode* t=new TreeNode(((t1!=NULL)?t1->val:0)+((t2!=NULL)?t2->val:0));
        t->left=mergeTrees(((t1!=NULL)?t1->left:NULL),((t2!=NULL)?t2->left:NULL));
        t->right=mergeTrees(((t1!=NULL)?t1->right:NULL),((t2!=NULL)?t2->right:NULL));
        return t;
    }
