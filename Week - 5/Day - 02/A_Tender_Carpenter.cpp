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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        // for(ll i=0;i<n;i++)
        // {
        //     cout<<v[i]<<spc;
        // }
        bool flag = false;
        for(ll i=0;i<n-1;i++)
        {
            ll x = v[i]*2;
            ll y = v[i+1]*2;
            if((x>v[i+1])&&y>v[i])
            {
                flag = true;
                break;
            }
            // cout<<x<<" "<<y<<endl;
            
        }
        if(flag) YES;
        else NO;
    }
}