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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s = "";
        vector<int>cnt(26,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<26;j++)
            {
                if(cnt[j]==v[i])
                {
                    s+=(char)('a'+j);
                    cnt[j]++;
                    break;
                }
            }
        }
        cout<<s<<endl;
    }
}