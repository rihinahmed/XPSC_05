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
    
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        
        ll l=0,r=0,cnt=0,sum=0;
        ll mx = 0;
        while(r<n)
        {
            sum+=v[r];
            if(sum<=k)
            {
                mx=max(mx,r-l+1);
            }
            else
            {
                while(sum>k)
                {
                    sum-=v[l];
                    l++;
                }
            }
            r++;
        }
        
        cout << mx << endl;
    
}