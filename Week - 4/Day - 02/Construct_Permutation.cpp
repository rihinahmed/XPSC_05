#include <bits/stdc++.h>
#define ll long long int
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define rihin                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

vector<int> constructPermutation(int n) {
    // If N+1 is even, it's not possible to construct a valid permutation
    if ((n + 1) % 2 == 0) {
        return {-1};
    }

    // Return the sequence [1, 2, ..., N]
    vector<int> perm(n);
    iota(perm.begin(), perm.end(), 1);
    return perm;
}

int main() {
    rihin;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> result = constructPermutation(n);
        if (result[0] == -1) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << result[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
