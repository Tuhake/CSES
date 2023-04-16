#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std; 

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, ans = 0; cin>>n;  
    while(n >= 5) {
        n /= 5; 
        ans += n; 
    }
    cout << ans; 
    return 0; 
}