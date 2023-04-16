#include <bits/stdc++.h>
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

int n, val, a[107];
int ans = 1e6 + 7;
int dp[N];

int tryy(int sum) {
    if(dp[sum] != -1) return dp[sum];

    int res = N;
    for(int i = 1; i <= n; i++) 
        if(sum - a[i] > 0)
            res = min(res, tryy(sum - a[i]) + 1);
    dp[sum] = res;
    return res;
}

void solve1() {
    memset(dp, -1, sizeof dp);
    cin >> n >> val;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[a[i]] = 1;
    }
    tryy(val);
    cout << (dp[val] == N ? -1 : dp[val]);
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    solve1();
    return 0;
}
/*
3 11
1 5 7
*/
