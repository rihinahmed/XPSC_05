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

void solve()
{
    ll n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
    }
    else if (n <= 5)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << (n -2) / 4 << endl;
    }
}

int main()
{
    rihin;

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
