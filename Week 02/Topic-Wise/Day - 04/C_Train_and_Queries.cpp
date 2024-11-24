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
    int t;cin>>t;
    while(t--)   
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++)
        {
            mp[vec[i]].push_back(i);
        }

        while(m--)
        {
            ll a,b;
            cin>>a>>b;
            if(mp.find(a) == mp.end() || mp.find(b)==mp.end())
            {
                NO;
                continue;
            }
            if(mp[a][0] < mp[b][mp[b].size()-1]) YES;
            else NO;
        }
    }
}