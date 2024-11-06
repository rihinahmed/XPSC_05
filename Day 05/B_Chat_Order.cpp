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
    map<string,bool>mp;
    vector<string>vec;
    while(n--)   
    {
        string s;
        cin>>s;
        vec.push_back(s);
    }

    int syz = vec.size();
    for(int i=vec.size()-1;i>=0;i--)
    {
        if(mp[vec[i]]!=true)
        {
            cout<<vec[i]<<endl;
            mp[vec[i]] = true;
        }
    }
}