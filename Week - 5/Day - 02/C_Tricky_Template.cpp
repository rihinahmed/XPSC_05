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
        string a,b,c;
        cin>>a>>b>>c;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=c[i] and b[i]!=c[i])
            {
                flag = true;
                break;
            }
        }
        if(flag) YES;
        else NO;
    }
}