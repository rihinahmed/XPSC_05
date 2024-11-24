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
        priority_queue<ll>pq;
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x==0)
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
            else
            {
                pq.push(x);
            }
        }

        cout<<ans<<endl;
    }
}