// https://leetcode.com/problems/peak-index-in-a-mountain-array/

void fastIO(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int search(vector<int>& arr,int low,int high){
        if(low==high) return low;
        int mid=(low+high)/2;
        if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] && mid+1<arr.size() && mid-1>=0)
            return mid;
        if(arr[mid]<arr[mid+1]) return search(arr,mid+1,high);
        return search(arr,low,mid-1);
    }
    int peakIndexInMountainArray(vector<int>& A) {
        fastIO();
        return search(A,0,A.size()-1);
    }
