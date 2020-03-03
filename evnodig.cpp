// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

// Solution 1: -
int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
            if(to_string(nums[i]).length()%2==0) count++;
        return count;
    }
    
// Solution 2: -
int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int len=log10(nums[i])+1;
            if(len%2==0) count++;
        }
        return count;
    }
