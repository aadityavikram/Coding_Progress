// https://www.codechef.com/problems/CSUB

#include <iostream>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(string str){
    long long count=0;
    for(int i=0;i<str.length();i++)
        if(str[i]=='1') count++;
    cout<<count*(count+1)/2<<'\n';
}

void input(){
    int n,t;
    cin>>t;
    while(t--){
        string str;
        cin>>n>>str;
        process(str);
    }
}

int main() {
	fastIO();
	input();
	return 0;
}
