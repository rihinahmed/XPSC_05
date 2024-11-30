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

int main()
{
    rihin;
    int t;
    cin >> t;
    while (t--)
    {
        int length_s, length_t;
        cin >> length_s >> length_t;
        string s1, s2;
        cin >> s1 >> s2;

        if (s1 == s2)
        {
            Yes;
            continue;
        }

        int cnta_in1 = count(s1.begin(), s1.end(), 'a');
        int cnta_in2 = count(s2.begin(), s2.end(), 'a');

        if (cnta_in1 != cnta_in2)
        {
            No;
            continue;
        }

        int first_b_in1 = 0, first_b_in2 = 0;

        while (first_b_in1 < length_s && s1[first_b_in1] != 'a')
            first_b_in1++;
        while (first_b_in2 < length_t && s2[first_b_in2] != 'a')
            first_b_in2++;

        if (first_b_in1 == first_b_in2)
            Yes;
        else
            No;
    }
    return 0;
}
