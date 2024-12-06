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
    ll t;cin>>t;
    while(t--)   
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }

        bool yes = false;
        ll cnt = 0;
        for(ll i=0;i<n;i++)
        {
            if(v[i]<0)
            {
                if(!yes)
                {
                    cnt++;
                    yes = true;
                }
            }
            else if(v[i]>0) yes = false;
        }

        ll sum =0;
        for(ll i=0;i<n;i++)
        {
            sum+=abs(v[i]);
        }

        cout<<sum<<spc<<cnt<<endl;
    }
}