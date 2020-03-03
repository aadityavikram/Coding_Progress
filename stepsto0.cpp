// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/

// Solution 1: -
int numberOfSteps (int num) {
        int count=0;
        while(num>0){
            if(num%2==0) num/=2;
            else num--;
            count++;
        }return count;
    }
    
// Solution 2: -
int numberOfSteps (int num) {
        if(num==0) return 0;
        return log2(num)+bitset<32>(num).count();
    }
