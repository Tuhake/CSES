#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;
const int N = 1e6 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

void solve(int n) {
    vector<int> a, b;
    if(n % 4 == 0) {
        for(int i = 1; i <= n / 4; i++) {
            a.push_back(i);
            a.push_back(n - i + 1);
        } 
        for(int i = n / 4 + 1; i <= n / 2; i++) {
            b.push_back(i);
            b.push_back(n - i + 1);
        }
    }
    else if((n - 3) % 4 == 0) {
        for(int i = 1; i <= n; i++) {
            if(i % 4 == 0 || i % 4 == 3) a.push_back(i);
            else b.push_back(i);
        }
    }
    else return void(cout << "NO");
    cout << "YES" << '\n' << a.size() << '\n';
    for(auto x : a) cout << x << ' ';
    
    cout  << '\n' << b.size() << '\n';
    for(auto x : b) cout << x << ' ';
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    solve(n);
    return 0;
}