// https://www.spoj.com/problems/MMASS/en/

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(string str){
    stack<int> st;
    int currWt=0,totalWt=0;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(') st.push(0); // if char is (
        else if(ch=='C' || ch=='H' || ch=='O'){ // if char is C or H or O
            if(ch=='C') st.push(12);
            else if(ch=='H') st.push(1);
            else st.push(16);
        }
        else if(ch==')'){ // if char is )
            currWt=0;
            while(st.top()>0){
                currWt+=st.top();
                st.pop();
            }
            st.pop();
            st.push(currWt);
        }
        else{ // if char is a digit
            int top_ele = st.top();
            st.pop();
            st.push(top_ele*(ch-'0'));
        }
    }
    while(!st.empty()){ // Total weight of all subparts
        int top_ele = st.top();
        totalWt+=top_ele;
        st.pop();
    }
    cout<<totalWt<<'\n';
}

void input(){
	string str;
	cin>>str;
	process(str);
}

int main() {
	fastIO();
	input();
	return 0;
}
