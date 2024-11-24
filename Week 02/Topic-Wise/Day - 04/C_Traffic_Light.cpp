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
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string s1 = s + s;
        set<int>st;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='g')
            {
                st.insert(i);
            }
        }

        int ans = 0;

        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==c)
            {
                auto it = st.lower_bound(i);
                if(it!=st.end())
                {
                    ans = max(ans,*it-i);
                }
            }
        }

        cout<<ans<<endl;
    }
}