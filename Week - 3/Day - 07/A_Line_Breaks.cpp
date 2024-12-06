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
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int curr = 0, cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(curr+v[i].size() <= m)
            {
               curr+=v[i].size();
               cnt++; 
            }
            else break;
        }
        cout<<cnt<<endl;
    }
}