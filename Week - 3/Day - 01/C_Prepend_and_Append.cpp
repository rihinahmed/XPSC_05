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
        int l = 0, r = n-1;
        while(l<=r)
        {
            if(l==r)
            {
                break;
            }
            if((s[l]=='1'&&s[r]=='0')||(s[l]=='0'&&s[r]=='1'))
            {
                l++;
                r--;
            }
            else break;
        }

        cout<<r-l+1<<endl;
    }
}