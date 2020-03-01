// http://codeforces.com/contest/797/problem/C

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(string str){
    stack<char> t;
    string u="";
    int index=0;
    vector<char> temp(str.length()+1,'~');
    
    // Finding next greater element for every element
    for(int i=str.length()-1;i>=0;i--)
        temp[i]=min(temp[i+1],str[i]);
    
    // Pushing element to stack till we get smaller element then print in reverse
    while(!t.empty() || temp[index]!='~'){
        while(!t.empty()&&temp[index]>=t.top()){
            char ch=t.top();
            u+=ch;
            t.pop();
        }
        if(temp[index]=='~') break;
        t.push(str[index]);
        index++;
    }
    temp.clear();
    cout<<u<<'\n';
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
