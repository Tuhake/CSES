#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long lthua(int a, int n) {
    if(n == 1) return a;
    long long tmp = lthua(a, n / 2);
    tmp = (tmp * tmp) % MOD;
    if(n % 2) tmp = (tmp * a) % MOD;
    return tmp;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    cout << lthua(2, n);
}