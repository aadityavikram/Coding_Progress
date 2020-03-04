// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> sumZero(int n) {
        fastIO();
        vector<int> res;
        for(int i=1;i<=n/2;i++){
            res.push_back(i);
            res.push_back(-i);
        }if(n%2==1) res.push_back(0);
        return res;
    }
