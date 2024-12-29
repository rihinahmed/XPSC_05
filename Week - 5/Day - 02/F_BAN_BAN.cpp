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
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        ll l=1,r=3*n;
        ll tmp = (n+1)/2;
        cout << tmp << endl;
        while(tmp--)
        {
            cout<<l<<spc<<r<<endl;
            l+=3;
            r-=3;
        }
    }
    return 0;
}