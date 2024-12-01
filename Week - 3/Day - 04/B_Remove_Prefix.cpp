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
        int n;
        cin>>n;
        vector<bool>vis(n+1,false);
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(!vis[vec[i]])
            {
                vis[vec[i]] = true;
                continue;
            }
            ans = i+1;
            break;
        }
        cout<<ans<<endl;
    }
}