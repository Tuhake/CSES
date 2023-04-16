#include <bits/stdc++.h>
using namespace std;

const long N = 2 * 1e5 + 7;
long n, m, k, a[N], b[N];
long cnt;

void input()
{
    cin >> n >> m >> k;
    for (long i = 1; i <= n; i++)
        cin >> a[i];
    for (long i = 1; i <= m; i++)
        cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + m);
}

void solve(long i, long j)
{
    while (i <= n && j <= m)
    {
        if (abs(a[i] - b[j]) <= k) 
        {
            cnt++; i++; j++;
        }
        else if (a[i] < b[j])
            i++;
        else j++;
    }
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    solve(1, 1);
}
