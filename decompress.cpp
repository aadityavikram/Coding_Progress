// https://leetcode.com/problems/decompress-run-length-encoded-list/

// Solution 1: -
vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressed;
        for(int i=0;i<nums.size()-1;i+=2)
            for(int j=1;j<=nums[i];j++)
                    decompressed.push_back(nums[i+1]);
        return decompressed;
    }

// Solution 2: -
vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressed;
        for(int i=0;i<nums.size();i+=2)
            decompressed.insert(decompressed.end(),nums[i],nums[i+1]);
        return decompressed;
    }

// Solution 3: - (Best)
vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> decompressed;
        for(int i=0;i<nums.size()/2;i++)
            decompressed.insert(decompressed.end(),nums[2*i],nums[2*i+1]);
        return decompressed;
    }
