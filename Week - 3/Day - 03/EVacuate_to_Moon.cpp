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
    cin>>t;
    while(t--)   
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>capacity(n),outlet(m);
        for(ll i=0;i<n;i++)
        {
            cin>>capacity[i];
        }
        for(ll i=0;i<m;i++)
        {
            cin>>outlet[i];
        }
        sort(capacity.begin(),capacity.end());
        sort(outlet.begin(),outlet.end());
        ll r1 = n-1,r2 = m-1;
        ll ans = 0;
        while(r1>=0 && r2>=0)
        {
            ll chk = outlet[r2]*h;
            if(chk>capacity[r1])
            {
                ans+=capacity[r1];
            }
            else ans+=chk;
            r1--;
            r2--;
        }
        cout<<ans<<endl;
    }
}