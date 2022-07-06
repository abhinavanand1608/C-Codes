// Idea of the problem
int dp[1000001];

int stairs(int N)
{
    if(N<=2) return N;

    if(dp[N] != -1) return dp[N];

    dp[N] = stairs(N-1) +stairs(N-2);
    return dp[N];
}