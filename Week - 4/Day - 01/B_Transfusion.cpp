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
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll oddSum = 0,evenSum = 0,oddcnt=0,evencnt=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                oddSum+=v[i];
                oddcnt++;
            }
            else
            {
                evenSum+=v[i];
                evencnt++;
            }
        }

        if(oddSum%oddcnt==0 && evenSum%evencnt==0)
        {
            if(oddSum/oddcnt == evenSum/evencnt) YES;
            else NO;
        }
        else NO;

    }
}