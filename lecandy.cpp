// https://www.codechef.com/problems/LECANDY

#include <iostream>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(int arr[],int n,int c){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    if(sum>c) cout<<"No\n";
    else cout<<"Yes\n";
}

void start(){
    int c,n,t;
    cin>>t;
    while(t--){
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        process(arr,n,c);
    }
}

int main() {
	fastIO();
	start();
	return 0;
}
