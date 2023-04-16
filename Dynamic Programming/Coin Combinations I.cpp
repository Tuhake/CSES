#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 1e6 + 7;
const ll M = 1e9 + 7;

long n, x, a[N];
ll dp[N];

void input()
{
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> n >> x;
    for (long i = 0; i < n; i++)
        cin >> a[i];
}

ll tryy(int j)
{
    if (j < 0)
        return 0;
    if (dp[j])
        return dp[j];

    for (int i = 1; i <= n; i++)
        if (j - a[i - 1] >= 0)
            dp[j] = (dp[j] + tryy(j - a[i - 1])) % M;

    return dp[j];
}

void solve()
{
    dp[0] = 1;
    cout << tryy(x) << endl;
    
    for (int j = 0; j <= x; j++)
        for (int i = 1; i <= n; i++)
            if (j - a[i - 1] >= 0)
                dp[j] = (dp[j] + dp[j - a[i - 1]]) % M;

    cout << dp[x] << '\n';
}

int main()
{
    input();

    solve();
    return 0;
}
