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
    ll x = n;
    vector<string>v;
    while(x--)   
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    reverse(v.begin(),v.end());
    map<string,bool>vis;
    stack<string>st;
    for(int i=0;i<n;i++)
    {
        if(!vis[v[i]])
        {
            st.push(v[i]);
            vis[v[i]] = true;
        }
        else continue;
    }
    string ans = "";
    while(!st.empty())
    {
        string tmp = st.top();
        st.pop();
        reverse(tmp.begin(),tmp.end());
        ans+=tmp[0];
        ans+=tmp[1];
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}