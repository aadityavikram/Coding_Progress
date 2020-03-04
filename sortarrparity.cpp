// https://leetcode.com/problems/sort-array-by-parity/

vector<int> sortArrayByParity(vector<int>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> resEven,resOdd;
        for(auto num:A){
            if(num%2==0) resEven.push_back(num);
            if(num%2==1) resOdd.push_back(num);
        }resEven.insert(resEven.end(), resOdd.begin(), resOdd.end());
        return resEven;
    }
