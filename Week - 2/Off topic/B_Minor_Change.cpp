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
    string s,t;
    cin>>s>>t;
    int n = s.size();
    int cnt = 0;
    for(int i=0;i<n;i++)   
    {
        if(s[i]!=t[i]) cnt++;
    }
    cout<<cnt<<endl;
}