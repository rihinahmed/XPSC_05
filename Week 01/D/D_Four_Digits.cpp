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
    int n;
    cin>>n;
    int digit_count=0;
    int tmp = n;
    while(tmp>0)   
    {
        tmp/=10;
        digit_count++;
    }
    // cout<<digit_count<<endl;
    int need_zero = 4-digit_count;
    string zero = "";
    for(int i=0;i<need_zero;i++)
    {
        zero+='0';
    }
    string apd = to_string(n);
    if(n!=0) zero+=apd;
    cout<<zero<<endl;
}