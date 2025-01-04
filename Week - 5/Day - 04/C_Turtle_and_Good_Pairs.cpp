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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<pair<ll,ll>>freq(26,{0,0});
        for(ll i=0;i<26;i++)
        {
            freq[i] = {0,i};
        }
        for(ll i=0;i<n;i++)
        {
            freq[s[i]-'a'].first++;
        }

        sort(freq.begin(),freq.end(),greater<pair<ll,ll>>());
        string res;
        queue<pair<ll,ll>>q;
        for(ll i=0;i<26;i++)
        {
            if(freq[i].first>0)
            {
                q.push({freq[i].first,freq[i].second});
            }
        }

        while(!q.empty())
        {
            pair<ll,ll>curr = q.front();
            q.pop();
            if(curr.first>0)
            {
                cout<<char('a'+curr.second);
                curr.first--;
                q.push(curr);
            }
            // res+=string(curr.first,'a'+curr.second);
        }
        cout<<endl;

    }
}
