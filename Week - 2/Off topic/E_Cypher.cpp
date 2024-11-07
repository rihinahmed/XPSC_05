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
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
        }
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            string s;
            cin>>s;
            for(int j=0;j<k;j++)
            {
                if(s[j]=='D')
                {
                    vec[i]++;
                    if(vec[i]==10) vec[i] = 0;
                }
                if(s[j]=='U')
                {
                    vec[i]--;
                    if(vec[i]==-1) vec[i] = 9;
                }
            }
        }

        for(auto num:vec)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}