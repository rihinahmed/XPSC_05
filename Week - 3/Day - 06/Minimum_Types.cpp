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
        vector<ll> v1(n), v2(n);


        for (ll i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        vector<ll>ans;

        for(ll i=0;i<n;i++)
        {
            ans.push_back(v1[i]*v2[i]);
        }
        sort(ans.begin(),ans.end(),greater<ll>());

        ll cnt = 0, currmoney = 0;
        
        for(ll i=0;i<ans.size();i++)
        {
            currmoney+=ans[i];
            cnt++;
            if(currmoney >= k)
            {
                break;
            }
        }

        if (currmoney < k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }
}
