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
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        ll seat = 2*m;
        ll ans = 0;
        ans+=min(m,a);
        ans+=min(m,b);
        ll remain = seat-min(m,a)-min(m,b);
        ans+=min(remain,c);
        cout<<ans<<endl;
    }
}