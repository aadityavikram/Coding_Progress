// http://codeforces.com/contest/5/problem/C

#include <iostream>
#include <stack>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(string str){
    stack<pair<char,int>> st;
    st.push({'#',-1}); // push this pair to avoid underflow later
    long long count=1,len=0,mx=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='(') st.push({str[i],i}); // push if char is {
        else{
            // if char is } and stack is empty or top is {#,-1}
            if(st.size()<=1) st.top()={str[i],i};
            else{ // otherwise just pop on } and check dist between its index and top ele index
                st.pop();
                len=i-st.top().second;
                if(len>mx){ // if len is greatest then it is new max so count resets
                    mx=len;
                    count=1;
                }else if(len==mx) count++; // else count adds
            }
        }
    }
    cout<<mx<<' '<<count<<'\n';
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
