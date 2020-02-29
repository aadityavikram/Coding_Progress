#include <iostream>
#include <algorithm>
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

void process(int arr[],int n){
    int start,end;
	for(start=n-2;start>=0;start--)
		if(arr[start]<arr[start+1]) break;
	if(start==-1) cout<<"-1\n";
	else{
    	for(end=start+1;end<n;end++)
    		if(arr[end]<=arr[start]) break;
    	swap(arr[start],arr[end-1]);
    	sort(arr+start+1,arr+n);
    	for(int i=0;i<n;i++) cout<<arr[i];
    	cout<<'\n';
    }
}

void input(){
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
	input();
	return 0;
}
