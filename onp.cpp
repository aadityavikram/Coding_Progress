// https://www.spoj.com/problems/ONP/

#include <iostream>
#include <stack>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(string str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z') cout<<str[i];
        else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='^') st.push(str[i]);
        else if(str[i]==')' && !st.empty()){
            cout<<st.top();
            st.pop();
        }
    }cout<<'\n';
}

void input(){
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    process(str);
	}
}

int main() {
	fastIO();
	input();
	return 0;
}
