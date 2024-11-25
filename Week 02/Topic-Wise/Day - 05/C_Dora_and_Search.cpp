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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = 0, r = n - 1;
        bool yes = true;

        int mn = *min_element(v.begin(),v.end());
        int mx = *max_element(v.begin(),v.end());
        while (true)
        {
            if (l == r)
            {
                yes = false;
                break;
            }
            if(v[l]==mn || v[l]==mx)
            {
                if(v[l]==mn)
                {
                    mn++;
                }
                if(v[l]==mx)
                {
                    mx--;
                }
                l++;
            }
            else if(v[r]==mn || v[r]==mx)
            {
                if(v[r]==mn)
                {
                    mn++;
                }
                if(v[r]==mx)
                {
                    mx--;
                }
                r--;
            }
            else break;
            
        }

        if (yes)
        {
            cout << l + 1 << " " << r + 1 << endl;
        }
        else
            cout << -1 << endl;
    }
}