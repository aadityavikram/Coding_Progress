// https://leetcode.com/problems/single-number/

int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int x0r=0;
        for(int i:nums) x0r^=i;
        return x0r;
    }
