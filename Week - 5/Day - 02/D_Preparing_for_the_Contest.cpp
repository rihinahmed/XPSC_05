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
        int n,k;
        cin>>n>>k;
        for(int i=n-k;i>=1;i--)
        {
            cout<<i<<" ";
        }
        for(int i=n-k+1;i<=n;i++)
        {
            cout<<i<<spc;
        }
        cout<<endl;
    }
}