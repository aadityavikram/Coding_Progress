// https://www.codechef.com/problems/COPS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(int arr[],int m,int prod){
    sort(arr,arr+m);
    vector<pair<int,int>> vec;
    int res=0,end=-1;
    for(int i=0;i<m;i++){
        int low=arr[i]-prod,high=arr[i]+prod;
        if(low<1) low=1;
        if(high>100) high=100;
        vec.push_back({low,high});
    }
    for(int i=0;i<m-1;i++)
        if(vec[i].second>vec[i+1].first)
            vec[i+1].first=vec[i].second;
            
    for(int i=0;i<m;i++)
        if(vec[i].second==100){
            end=i;
            break;
        }
    if(end==-1) end=m-1;
    if(vec[0].first>1) res+=vec[0].first-1;
    if(vec[end].second<100) res+=100-vec[end].second;
    for(int i=0;i<end;i++)
        if(vec[i+1].first>vec[i].second)
            res+=vec[i+1].first-vec[i].second-1;
            
    cout<<res<<'\n';
}

void input(){
    int m,t,x,y;
    cin>>t;
    while(t--){
        cin>>m>>x>>y;
        int arr[m];
        for(int i=0;i<m;i++) cin>>arr[i];
        process(arr,m,x*y);
    }
}

int main() {
	fastIO();
	input();
	return 0;
}
