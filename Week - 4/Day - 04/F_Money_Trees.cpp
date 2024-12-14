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
        ll n, k;
        cin >> n >> k;
        vector<ll> v1(n), v2(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        ll l = 0, r = 0, ans = 0, sum = 0;
        while (r < n)
        {
            if (r+1<n && v2[r] % v2[r + 1] == 0)
            {
                sum += v1[r];
                if (sum <= k)
                {
                    ans = max(ans, r - l + 1);
                }
                else
                {
                    while (sum > k)
                    {
                        sum -= v1[l];
                        l++;
                    }
                    if (sum <= k)
                    {
                        ans = max(ans, r - l + 1);
                    }
                }
                r++;
            }
            else
            {
                sum += v1[r];
                if (sum <= k)
                {
                    ans = max(ans, r - l + 1);
                }
                l = r + 1;
                r++;
                sum = 0;
            }
        }

        cout << ans << endl;
    }
}