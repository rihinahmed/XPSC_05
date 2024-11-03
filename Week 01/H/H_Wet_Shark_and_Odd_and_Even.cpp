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
    ll n;
    cin>>n;
    // vector<ll>v;
    vector<ll>even,odd;
    for(ll i=0;i<n;i++)   
    {
        ll x;
        cin>>x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }

    ll sum = 0;
    ll even_syz = even.size();
    ll odd_syz = odd.size();
    sort(odd.begin(),odd.end(),greater<ll>());
    if(odd_syz%2!=0) odd_syz--;

    for(ll i=0;i<even_syz;i++)
    {
        sum+=even[i];
    }
    for(ll i=0;i<odd_syz;i++)
    {
        sum+=odd[i];
    }
    cout<<sum<<endl;

}