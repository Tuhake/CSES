#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
 
using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;
 
int n, f[1007][1007];
char s[1007][1007];
 
void input()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> s[i][j];
}
 
void solve() {
    f[0][1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(s[i][j] == '.') f[i][j] = (f[i - 1][j] + f[i][j - 1]) % MOD;
            else f[i][j] = 0;
        }
    }
    cout << f[n][n];
}
 
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    input();
    if(s[0][0] == '*' || s[n - 1][n - 1] == '*') cout << 0;
    else solve();
    return 0;
}