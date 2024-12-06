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
        ll n;
        cin>>n;
        string s = to_string(n);
        ll tmp = n;
        ll sum = 0;
        while(tmp>0)
        {
            sum+=tmp%10;
            tmp/=10;
        }
        ll oc2=0,oc3=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]==2) oc2++;
            if(s[i]==3) oc3++;
        }

        oc3 = oc3%3;
        bool yes = false;
        for(ll i=0;i<=max(oc2,oc3);i++)
        {
            if(sum%9==0)
            {
                yes = true;
                break;
            }
            if(oc3==1)
            {
                if((sum+6)%9==0)
                {
                    yes = true;
                    break;
                }
            }
            if(oc3==2)
            {
                if((sum+12)%9==0)
                {
                    yes = true;
                    break;
                }
            }
            sum+=2;

        }

        if(yes) YES;
        else NO;
    }
}