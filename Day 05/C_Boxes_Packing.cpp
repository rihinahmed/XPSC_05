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
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int ans = INT_MIN;
    for(auto it = mp.begin();it!=mp.end();it++)
    {
        ans = max(ans,it->second);
    }
    cout<<ans<<endl;
}