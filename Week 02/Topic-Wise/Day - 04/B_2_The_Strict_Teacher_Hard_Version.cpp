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
        int n,m,q;
        cin>>n>>m>>q;
        set<int>st;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            st.insert(x);
        }

        while(q--)
        {
            int x;
            cin>>x;
            auto it = st.lower_bound(x);
            int l = -1, r = -1;
            int ans;
            

            if(it!=st.end()) r = *it;
            if(it!=st.begin()) l = *prev(it);

            //For only left
            if(l==-1)
            {
                ans = r-1;
            }

            //For only right
            else if(r==-1)
            {
                ans = n-l;
            }

            //For middle
            else
            {
                ans = (r-l)/2;
            }

            cout<<ans<<endl;
        }
    }
}