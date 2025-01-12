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
        deque<ll>ans;
        for(ll i=0;i<=__lg(n);i++)
        {
            if((n>>i)&1)
            {
                ll val = n-(1LL<<i);
                if(val>0)
                    ans.push_front(val);
            }
        }
        ans.push_back(n);
        cout<<ans.size()<<endl;
        for(auto x:ans)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}