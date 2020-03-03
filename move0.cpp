// https://leetcode.com/problems/move-zeroes/

void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int index=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]!=0){
                swap(nums[i],nums[index]);
                index++;
            }
    }
