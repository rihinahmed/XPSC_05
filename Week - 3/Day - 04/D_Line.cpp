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
    int t;
    cin>>t;
    while(t--)   
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll total = 0;
        vector<ll> ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                ans.push_back((n-1-i)-i);
                total+=i;
            }
            else
            {
                ans.push_back(i-(n-1-i));
                total+=(n-1-i);
            }
        }
        sort(ans.begin(),ans.end(),greater<ll>());
        for(auto num:ans)
        {
            if(num>0) total+=num;
            cout<<total<<" ";
        }
        cout<<endl;
    }
}