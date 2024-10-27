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
    vector<int>vec(n);
    for(int i=0;i<n;i++)   
    {
        cin>>vec[i];
    }
    int s = 0, d = 0;
    sort(vec.begin(),vec.end());
    for(int i=n-1;i>=0;i-=2)
    {
        s+=vec[i];
    }
    for(int i=n-2;i>=0;i-=2)
    {
        d+=vec[i];
    }
    cout<<s<<" "<<d<<endl;
}