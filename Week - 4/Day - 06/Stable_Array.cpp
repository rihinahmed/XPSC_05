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
        ll n;
        cin >> n;
        vector<ll> nv(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll mx = v[n - 1];
        ll stp = 0;

        for (ll i = n - 2; i >= 0; i--)
        {
            
            if (v[i] < mx)
            {
                stp++;
            }
            else
            {
                mx = v[i];
            }
        }

        cout << stp << endl;
    }

    return 0;
}