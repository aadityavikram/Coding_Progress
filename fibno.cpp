// https://leetcode.com/problems/fibonacci-number/

int fib(int N) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int dp[31];
        dp[0]=0; dp[1]=1;
        for(int i=2;i<=30;i++) dp[i]=dp[i-1]+dp[i-2];
        return dp[N];
    }
