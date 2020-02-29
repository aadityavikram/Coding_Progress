// https://www.codechef.com/problems/SALARY

#include <iostream>
#include <climits>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(int arr[],int n){
    int sum=0,mn=INT_MAX;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mn=min(mn,arr[i]);
    }
    cout<<sum-n*mn<<'\n';
}

void start(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        process(arr,n);
    }
}

int main() {
	fastIO();
	start();
	return 0;
}
