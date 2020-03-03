// https://leetcode.com/problems/n-ary-tree-preorder-traversal/

// Solution 1: - (Recursive)
void temp(Node* root, vector<int>& res){
        if(root==NULL) return;
        res.push_back(root->val);
        for(auto child:root->children)
            temp(child,res);
    }
    vector<int> preorder(Node* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> res;
        temp(root,res);
        return res;
    }
    
// Solution 2: - (Iterative)
vector<int> preorder(Node* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> res;
        stack<Node*> st;
        if(root==NULL) return res;
        st.push(root);
        while(!st.empty()){
            Node* temp=st.top();
            res.push_back(temp->val);
            st.pop();
            for(int i=temp->children.size()-1;i>=0;i--) st.push(temp->children[i]);
        }
        return res;
    }
