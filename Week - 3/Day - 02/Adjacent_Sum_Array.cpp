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

        vector<ll> b(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        vector<ll> a(n);
        a[0] = 1;
        for(int i=1;i<n;i++)
        {
            a[i] = b[i-1]-a[i-1];
        }
        for(auto num:a)
        {
            cout<<num<<" ";

        }
        cout<<endl;
    }

    return 0;
}
