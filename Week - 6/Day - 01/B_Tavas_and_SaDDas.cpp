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
    ll n;
    cin>>n;
    string s = to_string(n);
    string t = "";
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='4') t+='0';
        else t+='1';
    }
    ll chk = t.size();
    ll ans = 0;
    for(ll i=1;i<chk;i++)
    {
        ans+=(1<<i);
    }

    ll p = 0;
    ll y=0;
    for(ll i=chk-1;i>=0;i--)
    {
        if(t[i]=='1')
        {
            p+=(1<<y);
        }
        y++;
    }
    cout<<ans+p+1<<endl;
}