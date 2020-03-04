// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int maxDepth(Node* root) {
        fastIO();
        if(root==NULL) return 0;
        int depth=0;
        for(auto child:root->children)
            depth=max(depth,maxDepth(child));
        return 1+depth;
    }
