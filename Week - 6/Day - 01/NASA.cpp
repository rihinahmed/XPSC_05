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

const int x = (1LL<<15)-1;

vector<ll>pal;
bool isPalindrome(ll n)
{
    string s = to_string(n);
    string t = s;
    reverse(t.begin(),t.end());
    return s==t;
}

void makePalindrome()
{
    for(ll i=0;i<x;i++)
    {
        if(isPalindrome(i))
        {
            pal.push_back(i);
        }
    }
}
int main()
{
    rihin;
    ll t;
    cin>>t;
    makePalindrome();
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n),cnt(x+1);
        // set<ll>st;
        // ll ans = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
            // st.insert(v[i]);
        }

        ll ans = n;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<pal.size();j++)
            {
                ll curr = v[i]^pal[j];
                ans+=cnt[curr];
            }
        }
        

        cout<<ans/2<<endl;

    }
}