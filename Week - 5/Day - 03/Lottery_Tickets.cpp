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
        ll my = v[0];
        ll my_idx = -1;
        sort(v.begin(),v.end());
        for(ll i=0;i<n;i++)
        {
            if(v[i]==my)
            {
                my_idx = i;
                break;
            }

        }
        ll cnt = 0;
        if(my_idx == 0)
        {
            ll tmp = (v[my_idx+1]-v[my_idx])/2;
            // cout<<tmp<<endl;
            cnt = tmp+v[my_idx]-1;
        }
        else if(my_idx==n-1)
        {
            ll tmp = (v[n-1]-v[n-2])/2;
            cnt = 1000000-v[n-1]+tmp+1;
        }
        else
        {
            ll tmp1 = (v[my_idx]-v[my_idx-1])/2;
            ll tmp2 = (v[my_idx+1]-v[my_idx])/2;
            cnt = tmp2+tmp1+1;
        }

        // ll turn = 0;
        
        cout<<cnt<<endl;
    }
}