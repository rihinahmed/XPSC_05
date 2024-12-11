#include <bits/stdc++.h>
#define ll long long int
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

    ll sum = 0, cnt = 0, l = 0,r=0;

    while(r<n)
    {
        sum += v[r];

        while (sum >= k)
        {
            cnt += (n - r); 
            sum -= v[l];
            l++;
        }
        r++;
    }

    cout << cnt << endl;
    return 0;
}
