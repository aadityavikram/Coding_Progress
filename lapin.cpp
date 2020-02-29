// https://www.codechef.com/problems/LAPIN

#include <iostream>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(string str){
    int hash[26]={0},flag=1;
    string res[2]={"NO","YES"};
    string left=str.substr(0,str.length()/2);
    int mid=(str.length()%2==1)?str.length()/2+1:str.length()/2;
    string right=str.substr(mid,str.length()/2);
    for(int i=0;i<left.length();i++){
        hash[left[i]-'a']++;
        hash[right[i]-'a']--;
    }
    for(int i=0;i<26;i++)
        if(hash[i]!=0){
            flag=0;
            break;
        }
    cout<<res[flag]<<'\n';
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
