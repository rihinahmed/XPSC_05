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
    int n;
    cin>>n;
    map<string,bool>mp;
    while (n--)
    {
        string s;
        cin>>s;
        if(mp[s]!=true)
        {
            NO;
            mp[s] = true;
        }
        else YES;
    }
       
}