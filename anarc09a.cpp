// https://www.spoj.com/problems/ANARC09A/

#include <iostream>
#include <stack>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(string str,int t){
    stack<char> st;
    int count=0;
    
    for(int i=0;i<str.length();i++){
        if(str[i]=='{') st.push(str[i]);
        else{
            if(!st.empty()) st.pop();
            else{
                st.push('{');
                count++;
            }
        }
    }
    cout<<t<<". "<<count+st.size()/2<<'\n';
}

void input(){
	int t=1;
	while(1){
    	string str;
    	cin>>str;
    	if(str[0]=='-') break;
    	process(str,t);
    	t++;
	}
}

int main() {
	fastIO();
	input();
	return 0;
}
