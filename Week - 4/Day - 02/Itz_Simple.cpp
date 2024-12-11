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
        ll n,k,p;
        cin>>n>>k>>p;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];

        }
        sort(v.begin(),v.end());
        ll ved = k+v[n-1];
        v.pop_back();
        ll var = p;
        for(ll i=0;i<n-1;i++)
        {
            var+=v[i];
        }

        if(ved>var) cout<<"Ved"<<endl;
        else if(ved<var) cout<<"Varun"<<endl;
        else cout<<"Equal"<<endl;
    }
}