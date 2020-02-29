// https://www.codechef.com/problems/FRGTNLNG

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(string arr[],vector<vector<string>> vec,int n){
    unordered_map<string,int> ump;
    for(int i=0;i<n;i++) ump[arr[i]]=0;
    for(auto item:vec)
        for(auto items:item) ump[items]++;
    for(int i=0;i<n;i++){
        if(ump[arr[i]]>0) cout<<"YES ";
        else cout<<"NO ";
    }cout<<'\n';
}

void input(){
    int k,l,n,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string arr[n],element;
        vector<vector<string>> vec;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<k;i++){
            cin>>l;
            vector<string> temp;
            for(int i=0;i<l;i++){
                cin>>element;
                temp.push_back(element);
            }
            vec.push_back(temp);
            temp.clear();
        }
        process(arr,vec,n);
    }
}

int main() {
	fastIO();
	input();
	return 0;
}
