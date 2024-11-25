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
        int n, m;
        cin >> n >> m;
        string s1;
        cin >> s1;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        string s2;
        cin >> s2;

        // sort(v.begin(),v.end());
        sort(s2.begin(), s2.end());
        auto it = st.begin();
        int track = 1;
        while(track <= st.size())
        {
            s1[*it -1] = s2[track-1];
            it++;
            track++;
        }

        cout<<s1<<endl;

        // for (auto it = st.begin(); it != st.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        // cout << endl;
    }
}