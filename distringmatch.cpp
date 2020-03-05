// https://leetcode.com/problems/di-string-match/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> diStringMatch(string S) {
        fastIO();
        int low=0,high=S.length();
        vector<int> vec;
        for(int i=0;i<S.length();i++){
            if(S[i]=='I') vec.push_back(low++);
            else vec.push_back(high--);
        }vec.push_back(low);
        return vec;
    }
