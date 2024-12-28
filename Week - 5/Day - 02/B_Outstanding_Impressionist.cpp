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
        multiset<pair<ll,ll>>st;
        vector<pair<ll,ll>>v(n);
        for(ll i=0;i<n;i++)
        {
            ll a,b;
            cin>>a>>b;
            v[i] = {a,b};
            st.insert({a,b});
        }

        // for(auto it = st.begin();it!=st.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        string ans = "";
        for(ll i=0;i<n;i++)
        {
            bool flag = false;
            auto it = st.find({v[i].first,v[i].second});
            st.erase(it);

            // for(auto x = st.begin();x!=st.end();x++)
            // {
            //     cout<<x->first<<" "<<x->second<<endl;
            // }
            for(ll j=v[i].first;j<=v[i].second;j++)
            {
                
                if(st.find({j,j})==st.end())
                {
                    ans+='1';
                    flag = true;
                    // st.insert({v[i].first,v[i].second});
                    break;
                }
            }
            st.insert({v[i].first,v[i].second});
            if(!flag) ans+='0';
        }
        cout<<ans<<endl;
    }
}