#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define spc " "
#define pf push_front
#define endl "\n"
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define rihin                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n + 1), a(n + 1);
    for (ll i = n - k + 1; i <= n; i++)
    {
        cin >> v[i];
    }
    if (k == 1)
    {
        Yes;
        return;
    }
    for (ll i = n - k + 2; i <= n; i++)
    {
        a[i] = v[i] - v[i - 1];
    }

    if (!std::is_sorted(a.begin() + n - k + 2, a.end()))
    {
        No;
        return;
    }

    if (v[n - k + 1] > a[n - k + 2] * (n - k + 1))
    {
        No;
        return;
    }
    Yes;
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
}