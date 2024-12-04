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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        ll pos=0,neg=0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(ll i=0;i<n;i++)
        {
            if(v[i]<0) neg+=v[i];
            else pos+=v[i];
        }

        // ll tmp1 = ceil((float)pos/k);
        // ll tmp2 = ceil((float)neg/k);
        // // cout<<tmp1<<" "<<tmp2<<endl;

        if(k==1)
        {
            if(pos+neg==0) YES;
            else NO;
            continue;
        }
        // if(tmp1+tmp2==0 || tmp1+1+tmp2==0 || tmp1-1+tmp2==0 || tmp1+tmp2+1==0 || tmp1+tmp2-1==0 || tmp1+1+tmp2+1==0 || tmp1+1+tmp2-1==0 || tmp1-1+tmp2+1==0 || tmp1-1+tmp2-1==0) YES;
        // else NO;
        ll x = neg*-1;
        ll a = pos/k;
        ll b = x/k;
        if(a-b==0 || a-b == 1 || a-b==-1) YES;
        else NO;

        // if()
    }
}