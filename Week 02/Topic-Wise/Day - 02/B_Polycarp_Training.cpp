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
    vector<int>vec(n),vec2;
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
    }

    for(int i=0;i<n;i++)
    {
        if(vec[i]!=0)
        {
            vec2.push_back(vec[i]);
        }
    }
    sort(vec2.begin(),vec2.end());

    int cnt = 0;
    for(int i=0;i<vec2.size();i++)
    {
        if(vec2[i]>=cnt+1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

}