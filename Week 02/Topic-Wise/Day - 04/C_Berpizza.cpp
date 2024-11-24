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
    int q;
    cin>>q;
    set<pair<int,int>>st;
    multiset<pair<int,int>>ml;
    int x = 1;
    vector<int>ans;
    while(q--)   
    {
        ll a;
        cin>>a;
        if(a==1)
        {
            ll m;
            cin>>m;
            st.insert({x,m});
            ml.insert({m,-x});
            x++;
        }
        else if(a==2)
        {
            int pos = st.begin()->first, money = st.begin()->second;
            ans.push_back(pos);
            st.erase({pos,money});
            ml.erase({money,-pos});
        }
        else
        {
            int pos = ml.rbegin()->second *-1,money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            st.erase({pos,money});
        }
    }
    for(int val:ans)
    {
        cout<<val<<spc;
    }
}