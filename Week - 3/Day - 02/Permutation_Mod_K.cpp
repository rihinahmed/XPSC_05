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
        int n,k;
        cin>>n>>k;
        set<int>st;
        for(int i=1;i<=n;i++)
        {
            st.insert(i);
        }
        int x = 1;
        vector<int>v;
        while(!st.empty())
        {
            auto it = st.begin();
            for(int i=0;i<st.size();i++)
            {
                if(*it %k !=x)
                {
                    v.push_back(*it);
                    st.erase(it);
                    x++;
                }
            }
        }
        for(auto it:v)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

}