#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;

string s;
int len;
ll cnt[300], ans = 1, tmp = 1;

ll luythua(ll a, ll n)
{
    if(n == 1)
        return a % MOD;
    ll res = luythua(a, n / 2) % MOD;
    res = (res * res) % MOD;
    if (n % 2 == 1) res = (res * a) % MOD;
    return res;
}

int main()
{
    cin.tie(NULL)->sync_with_stdio(false);
    cin >> s;
    len = s.size();

    for(int i = 1; i <= len; i++)
    {
        ans = (ans * (i % MOD)) % MOD;
        cnt[s[i - 1]]++;
        tmp = (tmp * cnt[s[i - 1]]) % MOD;
    }

    ans = (ans * luythua(tmp, MOD - 2)) % MOD; // == ans / tmp
    cout << ans;
    return 0;
}