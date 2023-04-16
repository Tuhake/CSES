#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;

int maxx(int x) {
    int r = 0;
    while(x) {
        r = max(r, x % 10);
        x /= 10;
    }
    return r;
}

int solve1(int n){
    int cnt = 0;
    while(n != 0) {
        n -= maxx(n);
        cnt++;
    }
    return cnt;
}

int f[N];

int solve2(int n){
    int tmp;
    memset(f, 0x3f, sizeof(f));
    f[n] = 0;
    for (int i = n; i > 0; i--){
		tmp = i;
		while (tmp){
			f[i - tmp % 10] = min(f[i] + 1, f[i - tmp % 10]);
			tmp /= 10;
		}
	}
    return f[0];
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    cout << solve1(n) << '\n';
    cout << solve2(n); 
    return 0;
}