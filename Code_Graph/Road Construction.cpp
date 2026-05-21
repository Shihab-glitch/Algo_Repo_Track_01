// Road Cons

#include <iostream>
#include <vector>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, m;
    cin >> n >> m;
    vi v(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int a, b;
        cin >> a >> b;
        v[a] = v[b] = 1;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (v[i] == 0)
        {
            cout << (n - 1) << "\n";
            for (int j = 1; j <= n; ++j)
            {
                if (i != j)
                    cout << i << " " << j << "\n";
            }
            return;
        }
    }
}

int main()
{
    int tt = 1;
    // cin >> tt;
    while (tt--)
        solve();
    return 0;
}