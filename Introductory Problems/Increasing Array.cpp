#include<bits/stdc++.h>
using namespace std;

long n, a, tmp, ans;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> tmp;
    for(int i = 2; i <= n; i++) {
        cin >> a;
        if(tmp > a) ans += tmp - a;
        else tmp = a;
    }
    cout << ans;
    return 0;
}