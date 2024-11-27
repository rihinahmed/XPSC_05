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
        int now = 0;
        for(int i=0;i<n;i++)
        {
            now+=v[i];
        }
        int pass = ((n+1)*100)/2;
        if(pass - now > 100) cout<<-1<<endl;
        else if(now >= pass) cout<<0<<endl;
        else cout<<pass-now<<endl;
    }
}