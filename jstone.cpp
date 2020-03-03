// https://leetcode.com/problems/jewels-and-stones/

int numJewelsInStones(string J, string S) {
        int hash[256]={0},count=0;
        for(int i=0;i<J.length();i++) hash[J[i]]=1;
        for(int i=0;i<S.length();i++)
                if(hash[S[i]]==1) count++;
        return count;
    }
