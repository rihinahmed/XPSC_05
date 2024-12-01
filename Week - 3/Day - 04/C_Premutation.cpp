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
        int n;
        cin>>n;
        vector<vector<int>>v(n,vector<int>(n-1));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>v[i][j];
            }
        }
        vector<int>ans;
        int match = n-1;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[v[i][0]]++;
        }

        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second == match)
            {
                ans.push_back(it->first);
            }
        }

        int target;
        for(int i=0;i<n;i++)
        {
            if(v[i][0]!=ans[0])
            {
                target = i;
                break;
            }
        }

        for(int i=0;i<n-1;i++)
        {
            ans.push_back(v[target][i]);
        }

        for(auto num:ans)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
}