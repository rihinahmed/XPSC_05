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
    int n,m;
    cin>>n>>m;
    map<string,string>mp;
    while(n--)   
    {
        string s1,s2;
        cin>>s1>>s2;
        mp[s2] = s1;
    }
    while(m--)
    {
        string s1,s2;
        cin>>s1>>s2;
        string srch="";
        for(int i=0;i<s2.size()-1;i++)
        {
            srch+=s2[i];
        }

        cout<<s1<<spc<<s2<<spc<<"#"<<mp[srch]<<endl;
    }
}