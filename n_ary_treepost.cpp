// https://leetcode.com/problems/n-ary-tree-postorder-traversal/

vector<int> postorder(Node* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> res;
        stack<Node*> st;
        if(root==NULL) return res;
        st.push(root);
        while(!st.empty()){
            Node* tp=st.top();
            st.pop();
            for(auto child:tp->children)
                st.push(child);
            res.push_back(tp->val);
        }reverse(res.begin(),res.end());
        return res;
    }
