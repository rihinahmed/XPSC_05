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

ll xorpdt(vector<ll> &v, ll n)
{
    int pd = 1;
    const int mod = 1e9 + 7;

    for (ll i = 0; i < n; ++i)
    {
        for (ll j = i + 1; j < n; ++j)
        {
            pd = (pd * (v[i] ^ v[j])) % mod;
            if (pd == 0)
            {
                return 0;
            }
        }
    }
    return pd;
}

int main()
{
    rihin;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> v(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        int pd = xorpdt(v, n);

        if (pd >= l && pd <= r)
            YES;
        else
            NO;
    }

    return 0;
}
