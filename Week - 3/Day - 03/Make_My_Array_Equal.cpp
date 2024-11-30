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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(n==1)
        {
            YES;
        }
        else if(n==2)
        {
            if(v[0]==v[1] || v[0]==0 || v[1]==0) YES;
            else NO;
        }
        else
        {
            bool flag = true;
            for(ll i=0;i<n-1;i++)
            {
                if(v[i]==0) continue;
                if(v[i]!=v[i+1])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) YES;
            else NO;
        }
    }
}