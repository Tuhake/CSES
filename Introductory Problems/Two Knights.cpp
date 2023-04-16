#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    cout << 0 << '\n';
    for (int i = 2 ; i <= n ; i++) 
        cout << 1LL * (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << '\n';
    return 0;
}