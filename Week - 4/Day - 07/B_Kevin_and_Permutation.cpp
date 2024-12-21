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
        ll n,k;
        cin>>n>>k;
        vector<ll>ans(n,-1);
        ll x = 1;
        ll idx = k-1;
        while(idx<n)
        {
            ans[idx] = x;
            x++;
            idx+=k;
        }
        for(ll i=0;i<n;i++)
        {
            if(ans[i]==-1)
            {
                ans[i] = x;
                x++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            cout<<ans[i]<<spc;
        }
        cout<<endl;
    }
}