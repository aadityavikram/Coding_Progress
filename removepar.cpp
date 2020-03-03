// https://leetcode.com/problems/remove-outermost-parentheses/

// Solution 1: -
string removeOuterParentheses(string S) {
        string res="";
        int count=0,index=0,i=0;
        for(auto c:S){
            if(c=='(') count++;
            else count--;
            if(count==0){
                res+=S.substr(index+1,i-index-1);
                index=i+1;
            }
            i++;
        }return res;
    }
    
// Solution 2: - (Using stack)
string removeOuterParentheses(string S) {
        stack<char> st;
        string temp="",res="";
        for(auto c:S){
            if(c=='('){
                temp+=c;
                st.push(c);
            }
            else{
                if(!st.empty()){
                    st.pop();
                    temp+=c;
                    if(st.empty()){
                        res+=temp.substr(1,temp.length()-2);
                        temp="";
                    }
                }
                else{
                    if(temp!=""){
                        res+=temp.substr(1,temp.length()-2);
                        temp="";
                    }else continue;
                }
            }
        }return res;
    }
