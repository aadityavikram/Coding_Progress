// https://leetcode.com/problems/minimum-time-visiting-all-points/

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int tim3=0;
        for(int i=0;i<points.size()-1;i++)
            tim3+=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
        return tim3;
    }
