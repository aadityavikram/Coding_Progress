// https://leetcode.com/problems/hamming-distance/

// Solution 1: -
int hammingDistance(int x, int y) {
        int x0r=x^y,count=0;
        while(x0r){
            x0r&=(x0r-1);
            count++;
        }return count;
    }
    
// Solution 2: -
int hammingDistance(int x, int y) {
        return __builtin_popcount(x^y);
    }
