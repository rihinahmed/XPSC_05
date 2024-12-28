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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int cnt = 0;
        bool f = false;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                cnt++;
            }
            else if(v[i]>=2)
                f = true;
        }
        if(cnt<=ceil(1.0*n/2)) cout<<0<<endl;
        else if(f||cnt==n) cout<<1<<endl;
        else cout<<2<<endl;
    }
}