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


void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    bool yes = false;
    ll index;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(abs(v[i]-v[j])%k!=0)
                {
                    yes = false;
                    // index = i+1;
                }
                else
                {
                    yes = true;
                    break;
                }
            }
        }
        if(!yes)
        {
            YES;
            cout<<i+1<<endl;
            return;
        }
    }
    NO;
}
int main()
{
    rihin;
    ll t;
    cin>>t;
    while(t--)   
    {
        solve();
    }
}