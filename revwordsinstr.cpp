// https://leetcode.com/problems/reverse-words-in-a-string-iii/

string reverseWords(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        s+=' ';
        string word="",sentence="";
        int index=0;
        for(auto ch:s){
            if(ch!=' ') word+=ch;
            else{
                reverse(word.begin(),word.end());
                sentence+=word;
                if(index!=s.length()-1) sentence+=' ';
                word="";
            }
            index++;
        }return sentence;
    }
