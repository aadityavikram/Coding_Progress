// https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    string freqAlphabets(string s) {
        fastIO();
        string res;
        int num=0;
        for(int i=0;i<s.length();i++){
            if(i+2<s.length() && s[i+2]=='#'){
                num=num*10+(s[i]-'0');
                num=num*10+(s[i+1]-'0');
                res+=num-1+'a';
                num=0;
                i+=2;
            }
            else res+=(s[i]-'0')-1+'a';
        }return res;
    }
