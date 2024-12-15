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
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        ll l=0,r=n-1,score=0,sum=0;
        for(ll i=0;i<n;i++)
        {
            sum+=v[i];
        }

        // cout<<sum<<endl;
        while(l<r)
        {
            if(s[l]=='L' && s[r]=='R')
            {
                score+=sum;
                sum-=v[l];
                l++;
                sum-=v[r];
                r--;
            }
            else
            {
                if(s[l]=='R')
                {
                    sum-=v[l];
                    l++;
                }
                if(s[r]=='L')
                {
                    sum-=v[r];
                    r--;
                }
            }
        }
        cout<<score<<endl;
    }
}