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
    string s;
    cin >> s;
    vector<int> freq(26);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    int track = -1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            track = i;
            break;
        }
    }
    if (track == -1)
        cout << "None" << endl;
    else
    {

        char ans = track + 'a';
        cout << ans << endl;
    }
}