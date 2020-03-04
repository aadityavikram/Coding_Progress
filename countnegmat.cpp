// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

int search(vector<int>& row,int low,int high){
        if(low==high) return low;
        int mid=(low+high)/2;
        if(row[mid]<0){
            if(mid-1>=0 && row[mid-1]>=0) return mid;
            return search(row,low,mid-1);
        }else{
            if(mid+1<row.size() && row[mid+1]<0) return mid+1;
            return search(row,mid+1,high);
        }
    }
    int countNegatives(vector<vector<int>>& grid) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int count=0;
        for(auto& row:grid){
            if(row[row.size()-1]>=0) continue;
            if(row[0]<0){
                count+=row.size();
                continue;
            }
            count+=row.size()-search(row,0,row.size()-1);
        }
        return count;
    }
