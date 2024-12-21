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
        string s;
        cin >> s;
        int n = s.size();
        map<int, vector<int>> indx;
        for (int i = 0; i < n; i++)
        {
            indx[s[i]].push_back(i);
        }

        int dir;
        if (s[0] < s[n - 1])
            dir = 1;
        else
            dir = -1;

        vector<int> ans;

        for (char c = s[0]; c != s[n - 1] + dir; c += dir)
        {
            for (auto have : indx[c])
            {
                ans.push_back(have);
            }
        }

        int cost = 0;
        for (int i = 1; i < ans.size(); i++)
        {
            cost += abs(s[ans[i]] - s[ans[i - 1]]);
        }

        cout << cost << " " << ans.size() << endl;
        for (auto have : ans)
        {
            cout << have + 1 << " ";
        }
        cout << endl;
    }
}
