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
    ll t;cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        if(s1==s2)
        {
            YES;
            continue;
        }
        if(s1[0]=='1')
        {
            YES;
            continue;
        }
        ll pos = -1;
        for(ll i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                pos = i;
                break;
            }

        }
        if(pos==-1)
        {
            NO;
            continue;
        }

        bool flag = true;
        for(ll i=0;i<pos;i++)
        {
            if(s1[i]!=s2[i])
            {
                flag = false;
                break;
            }
        }

        if(flag) YES;
        else NO;
    }
}   