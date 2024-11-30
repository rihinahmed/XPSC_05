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
    int x,y,z;
    cin>>x>>y>>z;
    int played = x+y+z;
    int remain = 4-played;
    float my = x+(float)y/2;
    float opp = z+(float)y/2;

    float will_my = my+remain;
    if(will_my > opp) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;  
    // cout<<my<<endl;
}