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
    int a,b;
    cin>>a>>b;
    int mx1 = max(a,b);
    int mn1 = min(a,b);
    int ans = mx1;
    mx1--;
    int mx2 = max(mx1,mn1);
    ans+=mx2;
    cout<<ans<<endl;   
}