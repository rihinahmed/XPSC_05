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
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n * (n - 1) / 2;
        vector<ll>v(m);
        set<ll>st;
        for(ll i=0;i<m;i++)
        {
            ll x;
            cin>>x;
            st.insert(x);
        }
        for(auto it = st.begin();it != st.end();it++)
        {
            cout<<*it<<" ";
        }
        for(ll i=st.size();i<n;i++)
        {
            cout<<10000000<<" ";
        }

        cout<<endl;
        
    }
}