#include<iostream>
using namespace std;

void solve()
{
    int n, p[1005], cnt[1005] = {0}, check = 1;
    cin >> n;

    for (int i=2; i<=n; ++i)
    {
        cin >> p[i];
        cnt[p[i]]++;
    }
    for (int i=2; i<=n; ++i)
    {
        if (cnt[i] > 0)
        {
            cnt[p[i]]--;
            if(cnt[p[i]]<3)
            {
                check = 0;
                break;
            }
        }
    }

    if (check)
    {
        for (int i=1; i<=n; ++i)
        {
            if(cnt[i]<3 && cnt[i] != 0)
            {
                check = 0;
                break;
            }
        }
    }

    cout << ((check) ? "YES\n" : "NO\n");
}

int main()
{
    int tt = 1; // cin >> tt;
    while(tt--) solve();
}