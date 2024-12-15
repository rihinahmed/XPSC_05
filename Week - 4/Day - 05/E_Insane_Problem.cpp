#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define spc " "
#define pf push_front
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define rihin                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int main()
{
    rihin;

    ll t;
    cin >> t;
    while (t--)
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        ll cnt = 0;
        ll pw = 1;

        while (pw <= r2)
        {

            ll xmin = max(l1, (l2 + pw - 1) / pw);
            ll xmax = min(r1, r2 / pw);

            if (xmin <= xmax)
            {
                cnt += (xmax - xmin + 1);
            }

            if (pw > r2 / k)
                break;

            pw *= k;
        }

        cout << cnt << endl;
    }

    return 0;
}
