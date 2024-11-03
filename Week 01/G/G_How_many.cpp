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
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s-i;j++)
        {
            for(int k=0;k<=s-i-j;k++)
            {
                if(i*j*k <=t) cnt++;
            }
        }
    }

    cout<<cnt<<endl;
       
}