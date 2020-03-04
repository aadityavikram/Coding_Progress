// https://leetcode.com/problems/sort-array-by-parity/

// Solution 1: -
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

// Solution 2: -
vector<int> sortArrayByParity(vector<int>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        partition(begin(A),end(A),[](int a){
            return a%2==0;
        });
        return A;
    }
