#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

int n, x, h[1007], s[1007];
long f[100007];

void input()
{
    cin >> n >> x;
    for(int i = 1; i <= n; i++) cin >> h[i];
    for(int i = 1; i <= n; i++) cin >> s[i];
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    input();
    for(int i = 1; i <= n; i++) 
        for(int j = x; j >= h[i]; j--) 
            f[j] = max(f[j], f[j - h[i]] + s[i]);

    cout << f[x];
    return 0;
}
