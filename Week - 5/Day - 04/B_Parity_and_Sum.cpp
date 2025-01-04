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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<ll> odd, even;
        for (ll i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even.push_back(v[i]);
            }
            else
            {
                odd.push_back(v[i]);
            }
        }

        if (odd.empty()||even.empty())
        {
            cout << 0 << endl;
            continue;
        }

        sort(even.begin(), even.end());
        ll max_odd = *max_element(odd.begin(), odd.end());

        ll ans = even.size();
        for(ll i=0;i<even.size();i++)
        {
            if(even[i]<max_odd) max_odd+=even[i];
            else
            {
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
