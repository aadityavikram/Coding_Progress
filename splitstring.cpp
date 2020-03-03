// 

// Solution 1: -
int balancedStringSplit(string s) {
        stack<char> st;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(s[i]=='R'){
                    if(st.top()=='R') st.push(s[i]);
                    else{
                        st.pop();
                        if(st.empty()) count++;
                    }
                }else{
                    if(st.top()=='L') st.push(s[i]);
                    else{
                        st.pop();
                        if(st.empty()) count++;
                    }
                }
            }
        }return count;
    }
    
// Solution 2: - (Shorter)
int balancedStringSplit(string s) {
        stack<char> st;
        int count=0,tempCount=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L') tempCount++;
            else tempCount--;
            if(tempCount==0) count++;
        }return count;
    }
