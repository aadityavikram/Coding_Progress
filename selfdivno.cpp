// https://leetcode.com/problems/self-dividing-numbers/

vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            int temp=i,flag=1;
            while(temp>0){
                if(temp%10==0 || i%(temp%10)!=0){
                    flag=0;
                    break;
                }temp/=10;
            }if(flag==1) res.push_back(i);
        }return res;
    }
