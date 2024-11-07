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
        string s1,s2;
        cin>>s1>>s2;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            if((s1[i]=='R' && s2[i]=='R')||(s1[i]=='G' && s2[i]=='B') || (s1[i]=='B' && s2[i]=='G')||(s1[i]=='G'&&s2[i]=='G')||(s1[i]=='B' && s2[i]=='B')) continue;
            else flag = false;
        }
        if(flag) YES;
        else NO;
    }
}