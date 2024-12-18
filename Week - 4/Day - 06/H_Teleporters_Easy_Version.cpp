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
        // vector<ll>v(n);
        priority_queue<ll>pq;
        for(ll i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            pq.push(-x-i);
        }
        ll cnt = 0;
        while(!pq.empty())
        {
            ll x = -pq.top();
            pq.pop();
            if(x>k) break;
            cnt++;
            k-=x;
        }
        cout<<cnt<<endl;
        

    }
}