// https://leetcode.com/problems/squares-of-a-sorted-array/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> sortedSquares(vector<int>& A) {
        fastIO();
        vector<int> pos,neg;
        for(int num:A){
            if(num<0) neg.push_back(num*num);
            else pos.push_back(num*num);
        }A.clear();
        reverse(begin(neg),end(neg));
        int first=0,second=0;
        while(first<pos.size() && second<neg.size()){
            if(pos[first]<=neg[second]) A.push_back(pos[first++]);
            else A.push_back(neg[second++]);
        }
        while(first<pos.size()) A.push_back(pos[first++]);
        while(second<neg.size()) A.push_back(neg[second++]);
        return A;
    }
