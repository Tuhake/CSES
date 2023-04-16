#include <bits/stdc++.h>
#define ll long long
#define pii pair <int, int>
#define fi first
#define se second

using namespace std;
const int N = 1e6 + 7;
const int MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

string s;
bool check;
vector <char> a, b;
int cnt[300], len;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0)->sync_with_stdio(0);
    cin >> s;
    len = s.size();

    for(int i = 0; i < len; i++) cnt[s[i]]++;

    char tmp = '-';
    for(int i = 0; i < len; i++) {
        while(cnt[s[i]] >= 2) {
            a.push_back(s[i]);
            b.push_back(s[i]);
            cnt[s[i]] -= 2;
        }
        if(cnt[s[i]] == 1) {
            cnt[s[i]]--;
            if(check == false) {
                check = true;
                tmp = s[i];
            }
            else {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }
    for(auto x : a) cout << x;
    if(tmp != '-') cout << tmp;
    
    reverse(b.begin(), b.end());
    for(auto x : b) cout << x;
    return 0;
}