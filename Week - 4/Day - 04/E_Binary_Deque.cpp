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
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if (sum < k)
        {
            cout << -1 << endl;
            continue;
        }

        ll min_op = n;
        ll l = 0, now = 0,r=0;
        while(r<n)
        {
            now += v[r];
            
            while (now > k)
            {
                now -= v[l];
                l++;
            }
            
            if (now == k)
            {
                min_op = min(min_op, n - (r - l + 1));
            }
            r++;
        }
        
        cout << min_op << endl;
    }
    return 0;
}
