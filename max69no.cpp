// https://leetcode.com/problems/maximum-69-number/

int maximum69Number (int num) {
        int flag=1;
        string n=to_string(num);
        for(int i=0;i<n.length();i++)
            if(n[i]=='6'){
                n[i]='9';
                break;
            }
        return stoi(n);
    }
