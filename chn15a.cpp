// https://www.codechef.com/problems/CHN15A

#include <iostream>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(int arr[],int n,int k){
    int count=0;
    for(int i=0;i<n;i++)
        if((arr[i]+k)%7==0) count++;
    cout<<count<<'\n';
}

void input(){
    int k,n,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        process(arr,n,k);
    }
}

int main() {
	fastIO();
	input();
	return 0;
}
