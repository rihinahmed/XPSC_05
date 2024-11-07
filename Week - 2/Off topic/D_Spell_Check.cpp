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
    int t;cin>>t;
    while(t--)   
    {
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        if(n!=5) NO;
        else
        {
            sort(s1.begin(),s1.end());
            if(s1=="Timru") YES;
            else NO;
        }
    }
}