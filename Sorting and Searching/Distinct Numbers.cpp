#include <bits/stdc++.h>
using namespace std;

long n, a[200007], cnt;

void input()
{
    cin >> n;
    for (long i = 1; i <= n; i++)
        cin >> a[i];
}

void solve()
{
    sort(a + 1, a + 1 + n);
    for (long i = 1; i <= n; i++)
    {
        cnt++;
        long j = i;
        while (a[i] == a[j])
            j++;
        i = j - 1;
    }
    cout << cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    input();
    solve();
}