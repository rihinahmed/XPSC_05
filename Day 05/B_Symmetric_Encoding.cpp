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
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        map<char,char>mp;
        string r = "";
        for(auto it = st.begin();it!=st.end();it++)
        {
            r+=*it;
        }

        int k = r.size();
        for(int i=0;i<k;i++)
        {
            mp[r[i]] = r[k-i-1];
        }
        string ans = "";
        for(char ch:s)
        {
            ans+=mp[ch];
        }
        cout<<ans<<endl;
    }
}