#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
 
using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;
 
int n;
ll dp[N];
 
void solve()
{
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= 6; j++)
            if(i - j >= 0)
                dp[i] = (dp[i] + dp[i - j]) % MOD;
                
    cout << dp[n] << '\n';
}
 
int main()
{
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n;
    solve();
    return 0;
}