// https://www.codechef.com/problems/RAINBOWA

#include <iostream>
#include <unordered_set>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void process(int arr[],int n){
    int low=0,high=n-1,flag=1;
    string res[2]={"no","yes"};
    while(low<high){
        if(arr[low]!=arr[high]){
            flag=0;
            break;
        }
        low++; high--;
    }
    if(flag==1){
        int hash[11]={0},len=n%2==0?n/2-1:n/2;
        for(int i=0;i<=len;i++) hash[arr[i]]=1;
        for(int i=1;i<11;i++)
            if(i<=7 && hash[i]==0 || i>7 && hash[i]==1){
                flag=0;
                break;
            }
    }
    cout<<res[flag]<<'\n';
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
