#include <bits/stdc++.h>
#define ll long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
using namespace std;

void solve() {
    string s;
    cin >> s;

    ll sum = 0;
    int twos = 0, threes = 0;

    for (char c : s) {
        int digit = c - '0';
        sum += digit;
        if (digit == 2) twos++;
        if (digit == 3) threes++;
    }

    for (int i = 0; i <= min(10, twos); i++) {
        for (int j = 0; j <= min(10, threes); j++) {
            if ((sum + i * 2 + j * 6) % 9 == 0) {
                YES;
                return;
            }
        }
    }

    NO;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
