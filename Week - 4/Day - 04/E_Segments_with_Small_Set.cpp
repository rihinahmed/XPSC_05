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

    map<ll, ll> mp;
    ll l = 0, r = 0, ans = 0;

    while (r < n)
    {
        mp[v[r]]++;

        while (mp.size() > k)
        {
            mp[v[l]]--;
            if (mp[v[l]] == 0)
            {
                mp.erase(v[l]);
            }
            l++;
        }

        ans += (r - l + 1);

        r++;
    }

    cout << ans << endl;
}
