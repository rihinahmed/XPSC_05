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
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>b[i];
    }
    ll l=0,r=0;
    ll ans = 0;
    while(l<n && r<m)
    {
        ll curr = a[l],cnt1=0,cnt2=0;
        while(l<n && curr == a[l])
        {
            l++;
            cnt1++;
        }
        while(r<m && curr>b[r]) r++;
        while(r<m&&b[r]==curr)
        {
            r++;
            cnt2++;
        }

        ans+=(1LL*cnt1*cnt2);
    }
    cout<<ans<<endl;
}