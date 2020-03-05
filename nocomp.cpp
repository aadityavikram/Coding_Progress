// https://leetcode.com/problems/number-complement/

int findComplement(int num) {
        long long bits=1;
        while(bits<=num) bits<<=1;
        return num^(bits-1);
    }
