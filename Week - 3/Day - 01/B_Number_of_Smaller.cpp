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
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)   
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    int l = 0;
    int r = 0;
    int cnt=0;
    for(int i=0;i<m;i++)
    {
        for(int i=0;i<n;i++)
        {
            if(a[l]<b[r])
            {
                l++;
                cnt++;
            }
            else break;
        }
        cout<<cnt<<" ";
        r++;
    }
    cout<<endl;
}