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
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    multiset<ll> ml;
    ll l = 0, r = 0, ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        ll mx = *ml.rbegin();
        ll mn = *ml.begin();
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (l < r && mx - mn > k)
            {
                ml.erase(ml.find(v[l]));
                mx = *ml.rbegin();
                mn = *ml.begin();
                l++;
            }
            if (mx - mn <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }

    cout<<ans<<endl;
}