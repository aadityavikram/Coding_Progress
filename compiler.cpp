// https://www.codechef.com/problems/COMPILER

#include <iostream>
#include <stack>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(string str){
    stack<char> st;
    int count=0,mx=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='<') st.push(str[i]);
        else{
            if(!st.empty()){
                st.pop();
                count+=2;
                if(st.empty()) mx=count;
            }else{
                mx=count;
                break;
            }
        }
    }cout<<mx<<'\n';
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
