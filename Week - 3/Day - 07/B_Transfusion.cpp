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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            sum+=v[i];
        }
        if(sum%n!=0)
        {
            NO;
            continue;
        }
        bool yes = true;
        for(ll i=0;i<n/2;i++)
        {
            if(v[i]==v[n-i-1])
            {
                yes = false;
                break;
            }
        }
        if(yes) YES;
        else NO;
    }
}