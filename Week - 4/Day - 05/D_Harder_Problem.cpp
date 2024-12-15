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
        vector<ll> ans;
        ll x=1;
        ll current_mode = v[0];
        if(current_mode==x) x++;
        ans.pb(v[0]);
        for (ll i = 1; i < n; i++)
        {
            if(current_mode==v[i])
            {
                ans.pb(x);
                x++;
            }
            else
            {
                ans.pb(v[i]);
                current_mode = v[i];
                if(current_mode==x) x++;
            }
        }
        for (ll num : ans)
        {
            cout<<num<<spc;
        }
        cout << endl;
    }
}