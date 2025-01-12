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
    // ll t;
    // cin>>t;
    string s1,s2;
    cin>>s1>>s2;
    cin>>s1>>s2;
    ll qn = 0;
    for(ll i=0;i<s2.size();i++)   
    {
        if(s2[i]=='?') qn++;
    }
    // if(s2.size()-qn==1)
    // {
    //     for(ll i=0;i<s2.size();i++)
    //     {
    //         if(s2[i]!='?')
    //         {
    //             if(s1[i]!=s2[i])
    //             {
    //                 cout<<(double)0<<fixed<<setprecision(12)<<endl;
    //                 break;
    //             }
    //         }
    //     }
    // }

    ll final1 = 0;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]=='+') final1++;
        else if(s1[i]=='-') final1--;
    }

    ll already2 = 0;
    for(ll i=0;i<s2.size();i++)
    {
        if(s2[i]=='+') already2++;
        else if(s2[i]=='-') already2--;
    }

    // cout<<already2<<endl;
    bool flag = false;

    ll possible = 1<<qn;
    ll x =0;
    for(ll i=0;i<(1<<qn);i++)
    {
        ll p = 0;
        for(ll k=0;k<qn;k++)
        {
            if((i>>k)&1)
            {
                p++;
            }
            else p--;
        }
        if(already2+p==final1)
        {
            x++;
        }
    }

    cout<<fixed<<setprecision(12)<<(double)x/possible<<endl;


}