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
        string s;
        cin>>s;
        ll cnt1=0,cnt0=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0') cnt0++;
            if(s[i]=='1') cnt1++;
        }
        if(cnt1==0 || cnt0==0) cout<<n<<endl;
        else cout<<1<<endl;
    }
}