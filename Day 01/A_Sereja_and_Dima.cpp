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
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    int s = 0, d = 0;
    int l = 0, r = n - 1;
    int term = 1;
    while (l <= r)
    {
        if (term % 2 != 0)
        {
            if (vec[l] >= vec[r])
            {
                s += vec[l];
                l++;
            }
            else
            {
                s+=vec[r];
                r--;
            }
        }
        else
        {
            if (vec[l] >= vec[r])
            {
                d += vec[l];
                l++;
            }
            else
            {
                d+=vec[r];
                r--;
            }
        }
        term++;
    }
    cout<<s<<" "<<d<<endl;
}