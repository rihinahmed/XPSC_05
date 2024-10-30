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

int main() {
    rihin;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<vector<string>> v(3, vector<string>(n));
        map<string, int> word_count;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> v[i][j];
                word_count[v[i][j]]++;
            }
        }
        
        vector<int> ans(3, 0);
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                string word = v[i][j];
                if (word_count[word] == 1) {
                    ans[i] += 3;
                } else if (word_count[word] == 2) {
                    ans[i] += 1;
                }
            }
        }
        
        // Output the points for each player
        for (int i = 0; i < 3; i++) {
            cout << ans[i];
            if(i<2) cout<<" ";
            else cout<<endl;
        }
    }
    return 0;
}
