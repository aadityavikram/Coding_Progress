// https://leetcode.com/problems/array-partition-i/

int arrayPairSum(vector<int>& nums) {
        ios::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2) sum+=nums[i];
        return sum;
    }
