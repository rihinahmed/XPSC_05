#include <bits/stdc++.h>
#define rihin                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int calculatetime(const string &str)
{
    int time = 2;
    for (int i = 1; i < str.size(); ++i)
    {
        time += (str[i] == str[i - 1]) ? 1 : 2;
    }
    return time;
}

int main()
{
    rihin;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string best_string = s;
        int max_time = calculatetime(s);

        for (char c = 'a'; c <= 'z'; ++c)
        {
            for (int i = 0; i <= s.size(); ++i)
            {
                string new_string = s.substr(0, i) + c + s.substr(i);
                int new_time = calculatetime(new_string);
                if (new_time > max_time)
                {
                    max_time = new_time;
                    best_string = new_string;
                }
            }
        }

        cout << best_string << endl;
    }
    return 0;
}
