// http://codeforces.com/contest/343/problem/B

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
        if(st.empty()) st.push(str[i]);
        else{
            if(st.top()==str[i]) st.pop();
            else st.push(str[i]);
        }
    }
    if(st.empty()) cout<<"Yes\n";
    else cout<<"No\n";
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
