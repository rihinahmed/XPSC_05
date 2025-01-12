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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(m+1);
    for(ll i=0;i<m+1;i++)   
    {
        cin>>v[i];
    }
    ll me = v[m];
    ll ans = 0;
    for(ll i=0;i<m;i++)
    {
        ll val = me^v[i];
        ll mx = __lg(val);
        ll local = 0;
        for(ll i=0;i<mx;i++)
        {
            if((v[i]>>i)&1) local++;
        }
        if(local<=k) ans++;
    }
    cout<<ans<<endl;
}