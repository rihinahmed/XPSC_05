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
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        string ans = "";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='p') ans+='q';
            if(s[i]=='q') ans+='p';
            if(s[i]=='w') ans+='w';
        }
        cout<<ans<<endl;
    }
}