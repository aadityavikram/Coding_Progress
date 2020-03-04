// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/

int repeatedNTimes(vector<int>& A) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int hash[10001]={0};
        for(int num:A){
            if(hash[num]==0) hash[num]++;
            else return num;
        }return -1;
    }
