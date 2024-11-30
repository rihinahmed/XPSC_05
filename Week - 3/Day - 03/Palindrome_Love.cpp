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

bool isPalindrome(string s)
{
    int syz = s.size();
    bool flag = true;
    for (int i = 0; i < syz; i++)
    {
        if (s[i] != s[syz - i -1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}
int main()
{
    rihin;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 2)
        {
            if (s[0] != s[1])
            {
                cout << -1 << endl;
            }
            else
                cout << 0 << endl;
            continue;
        }

        if (s[0] != s[n - 1])
        {
            string s1 = s.substr(0, n - 1);
            string s2 = s.substr(1, n-1);
            if (isPalindrome(s1) && isPalindrome(s2))
            {
                cout << -1 << endl;
            }
            else
                cout << 1 << endl;
            continue;
        }

        int l = 1,r = n-2;
        while(l<r)
        {
            if(s[l] !=s[r])
            {
                cout<<1<<endl;
                break;
            }
            l++;
            r--;
        }
        if(l>=r) cout<<0<<endl;
    }
}