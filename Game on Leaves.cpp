#include<iostream>
#include<vector>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, m;
    cin >> n >> m;

    vi arr(n+1, 0);

    for (int i=0; i<(n-1); ++i)
    {
        int u, v;
        cin >> u >> v;
        arr[u]++;
        arr[v]++;
    }

    (arr[m]<=1 || (n%2)==0) ? cout << "Ayush\n" : cout << "Ashish\n";

}

int main()
{
    int tt; cin >> tt;
    while(tt--) solve();
    return 0;
}