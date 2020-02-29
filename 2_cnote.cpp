#include <iostream>
#include <vector>
using namespace std;

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void print(vector<pair<int,int>> vec){
    for(auto item:vec) cout<<item.first<<' '<<item.second<<'\n';
}

void process(vector<pair<int,int>> vec,int x,int y,int k){
    int flag=0;
    string res[2]={"UnluckyChef","LuckyChef"};
    for(auto item:vec)
        if(item.first>=x-y && item.second<=k){
            flag=1;
            break;
        }
    cout<<res[flag]<<'\n';
}

void start(){
    int k,n,t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y>>k>>n;
        int p,c;
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            cin>>p>>c;
            vec.push_back({p,c});
        }
        process(vec,x,y,k);
    }
}

int main() {
	fastIO();
	start();
	return 0;
}
