// https://leetcode.com/problems/flipping-an-image/

// Solution 1: -
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        ios::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        for(auto& row:A){
            for(int i=0;i<row.size()/2;i++){
                swap(row[i],row[row.size()-1-i]);
                row[i]=(row[i]==1)?0:1;
                row[row.size()-1-i]=(row[row.size()-1-i]==1)?0:1;
            }
            if(row.size()%2==1)
                row[row.size()/2]=(row[row.size()/2]==1)?0:1;
        }return A;
    }
    
// Solution 2: - (shorter)
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        ios::sync_with_stdio(NULL);
        cin.tie(NULL);
        cout.tie(NULL);
        for(auto& row:A){
            reverse(row.begin(),row.end());
            for(int i=0;i<row.size();i++)
                row[i]=(row[i]==1)?0:1;
        }return A;
