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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string tmp = s;
        reverse(tmp.begin(),tmp.end());
        if(s[0]>s[s.size()-1])
        {
            cout<<tmp+s<<endl;

        }
        else cout<<s<<endl;
    }
}