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
        ll opn0 = 0,opn1 = 0;
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<ll>st1,st2;
        for(ll i=0;i<n;i++)     
        {
            if(s[i]=='0')
            {
                st1.push(s[i]);
            }
            else
            {
                if(!st1.empty())
                {
                    while(!st1.empty())
                    {
                        st1.pop();
                    }
                    opn0++;
                }
            }
        }
        if(!st1.empty()) opn0++;

        for(ll i=0;i<n;i++)     
        {
            if(s[i]=='1')
            {
                st2.push(s[i]);
            }
            else
            {
                if(!st2.empty())
                {
                    while(!st2.empty())
                    {
                        st2.pop();
                    }
                    opn1++;
                }
            }
        }
        if(!st2.empty()) opn1++;

        cout<<min(opn1,opn0)<<endl;
    }
}