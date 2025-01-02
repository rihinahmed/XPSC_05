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
        vector<vector<ll>> v(n, vector<ll>(n));
        bool tog = false;
        ll l = 1, r = n*n;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(tog) v[i][j] = l++;
                else v[i][j] = r--;
                tog = !tog;
            }
            if(i%2==0) reverse(v[i].begin(),v[i].end());
        }

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}