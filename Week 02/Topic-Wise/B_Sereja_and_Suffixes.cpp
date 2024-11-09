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
    int n,m;
    cin>>n>>m;
    vector<int>vec(n+1);
    set<int>st;
    for(int i=1;i<=n;i++)   
    {
        cin>>vec[i];
    }
    vector<int>ans(n+1);
    // set<int>st;
    for(int i=n;i>=1;i--)
    {
        st.insert(vec[i]);
        ans[i] = st.size();
    }

    while(m--)
    {
        int x;
        cin>>x;
        cout<<ans[x]<<endl;
    }
}