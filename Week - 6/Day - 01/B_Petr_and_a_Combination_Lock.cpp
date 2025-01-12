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
    vector<ll> v(t);
    for (ll i = 0; i < t; i++)
    {
        cin>>v[i];
    }
    bool flag = false;
    for(ll mask = 0;mask<(1<<t);mask++)
    {
        ll ans = 0;
        // cout<<mask<<endl;
        for(ll k=0;k<t;k++)
        {
            if((mask>>k)&1)
            {
                ans+=v[k];
                // cout<<v[k]<<" ";
            }
            else
            {
                // cout<<0<<" ";
                ans-=v[k];
            }
            // else ans-=v[k];
        }
        // cout<<endl;
        // cout<<ans<<endl;
        if(ans==0 || ans%360==0)
        {
            flag = true;
            break;
        }
    }

    if(flag) YES;
    else NO;
}