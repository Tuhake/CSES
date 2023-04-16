#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    while(n--) {
        long a, b; cin >> a >> b;
        if(a < b) {
            if(b % 2) cout << 1LL * b * b - a + 1;
            else  cout << 1LL * (b - 1) * (b - 1) + a;
        }
        else if(a % 2 == 0) cout << 1LL * a * a - b + 1;
        else cout << 1LL * (a - 1) * (a - 1) + b;
        cout << '\n';
    }
    return 0;
}