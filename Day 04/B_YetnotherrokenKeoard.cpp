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

        stack<int> st1, st2;
        string ans = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'b')
            {
                st1.push(1);
            }
            else if (s[i] == 'B')
            {
                st2.push(1);
            }
            else if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (!st2.empty())
                {
                    st2.pop();
                }
                else
                {
                    ans += s[i];
                }
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (!st1.empty())
                {
                    st1.pop();
                }
                else
                {
                    ans += s[i];
                }
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
}
