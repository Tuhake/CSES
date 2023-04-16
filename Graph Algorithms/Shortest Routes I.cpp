#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, ll>

using namespace std;
const int N = 2e5 + 7;
const ll MOD = 1e9 + 7;
const ll oo = 1e18 + 7;

long n, m;
vector<pii> adj[N];
vector<ll> D;
vector<int> trace;

void input()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        long u, v, d;
        cin >> u >> v >> d;
        adj[u].push_back({v, d});
    }
}

void path(int t)
{
    cout << '\n';
    vector<int> res;
    for(int i = t; i != -1; i = trace[i])
        res.push_back(i);
    reverse(res.begin(), res.end());
    for(auto x : res) cout << x << ' ';
}

void dijtra(int s)
{
    D.resize(n + 7, oo);
    // trace.resize(n + 7, -1);

    D[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> h;
    h.push({s, D[s]});

    while(!h.empty())
    {
        int u = h.top().first;
        ll du = h.top().second;
        h.pop();
        if(du != D[u]) continue;

        for(auto x : adj[u])
        {
            int v = x.first;
            ll dv = x.second;
            if(D[v] > du + dv)
            {
                D[v] = du + dv;
                h.push({v, D[v]});
                // trace[v] = u;
            }
        }
    }

    for(int i = 1; i <= n; i++)
        cout << D[i] << ' ';
    // path(n);
}

void solve()
{
    dijtra(1);
}

int main()
{
    cin.tie(NULL)->sync_with_stdio(false);
    input();
    solve();
    return 0;
}