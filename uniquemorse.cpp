// https://leetcode.com/problems/unique-morse-code-words/

int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(auto i:words){
            string word="";
            for(auto j:i)
                word+=morse[j-'a'];
            st.insert(word);
        }
        return st.size();
    }
