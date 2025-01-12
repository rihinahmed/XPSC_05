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

const int B = 30;
int main()
{
    rihin;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> bits(B + 1, 0);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = B; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                    bits[j]++;
            }
        }

        ll ans = 0;

        for (ll i = B; i >= 0; i--)
        {
            ll need = n - bits[i]; 
            if (need <= k)
            {
                ans += (1LL << i); 
                k -= need;
            }
        }

        cout << ans << endl;
    }
}
