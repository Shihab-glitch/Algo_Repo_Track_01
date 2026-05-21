#include<iostream>
#include<vector>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using vll = vector<vl>;

void solve()
{
    ll n, m; cin >> n >> m;
    vll adj(n+1);

    for (int i=1; i<=m; ++i)
    {
        ll a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    ll one = -1, x = 0, y = 0;

    for (int i=1; i<=n; ++i)
    {
        if (adj[i].size()==1)
        {
            one = adj[i][0];
            y = adj[adj[i][0]].size();
        }
    }

    for (auto adjN : adj[one])
    {
        ll k = adj[adjN].size();
        x = max(x, k);
    }

    cout << x << " " << (y-1) << "\n";
}

int main()
{
    ll tt; cin >> tt;
    while(tt--) solve();
    return 0;
}