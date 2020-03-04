// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> replaceElements(vector<int>& arr) {
        fastIO();
        vector<int> vec;
        int mx=0;
        vec.push_back(-1);
        for(int i=arr.size()-1;i>0;i--){
            mx=max(mx,arr[i]);
            vec.push_back(mx);
        }reverse(begin(vec),end(vec));
        return vec;
    }
