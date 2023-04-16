#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

int n, val, a[107];
long dp[N];

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    dp[0] = 1;
    cin >> n >> val;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        for(int w = a[i]; w <= val; w++) 
            dp[w] = (dp[w] + dp[w - a[i]]) % MOD;
    }
    cout << dp[val];
    return 0;
}
/*
3 9
2 3 5
*/
