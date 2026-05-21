#include<iostream>
#include<vector>

using namespace std;
using vi = vector<int>;

void solve()
{
    int n, x, last0 = 0;
    cin >> n;

    for (int i=1; i<=n; ++i)
    {
        cin >> x;
        if (x == 0) last0 = i;
    }
    for (int i=1; i<=last0; ++i)
    {
        cout << i << " ";
    }
    cout << (n+1) << " ";
    for (int i=last0+1; i<=n; ++i)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    int tt = 1;
    cin >> tt;
    while(tt--) solve();
    return 0;
}