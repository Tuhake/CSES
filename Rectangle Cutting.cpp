#include <bits/stdc++.h>
using namespace std;
const int N = 5e2 + 7;

int dp[N][N];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    if(n > m) swap(n, m);
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= m; j++) {
            dp[i][j] = 1e9;
            for(int k = 1; k < i; k++) dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            for(int k = 1; k < j; k++) dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
            dp[j][i] = dp[i][j];
        }
    }
    cout << dp[n][m];
    return 0;
}