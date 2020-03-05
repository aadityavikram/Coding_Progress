// https://leetcode.com/problems/keyboard-row/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<string> findWords(vector<string>& words) {
        fastIO();
        vector<string> vec;
        int hash[26]={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        for(string word:words){
            int temp=hash[tolower(word[0])-'a'];
            int flag=1;
            for(char letter:word)
                if(hash[tolower(letter)-'a']!=temp){
                    flag=0;
                    break;
                }
            if(flag==1) vec.push_back(word);
        }return vec;
    }
