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
        ll n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        ll sum = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll now = 0;
                ll ci = i,cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now+=v[ci][cj];
                    ci++;
                    cj++;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now+=v[ci][cj];
                    ci++;
                    cj--;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now+=v[ci][cj];
                    ci--;
                    cj++;
                }
                ci = i, cj = j;
                while(ci>=0 && ci<n && cj>=0 && cj<m)
                {
                    now+=v[ci][cj];
                    ci--;
                    cj--;
                }

                now-=v[i][j]*3;
                sum = max(sum,now);

            }
        }

        cout<<sum<<endl;
    }
}