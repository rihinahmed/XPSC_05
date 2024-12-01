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
        string s1,s2;
        cin>>s1>>s2;
        int x1 = 0,x2 = 0;
        if(s1==s2)
        {
            cout<<'='<<endl;
            continue;
        }
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='X') x1++;
        }
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]=='X') x2++;
        }

        // cout<<x1<<" "<<x2<<endl;

        if(x1>x2)
        {
            if(s1[s1.size()-1]=='S') cout<<'<'<<endl;
            else cout<<'>'<<endl;
        }
        else if(x1<x2)
        {
            if(s2[s2.size()-1]=='S') cout<<'>'<<endl;
            else cout<<'<'<<endl;
        }
        else
        {
            int n = s1.size();
            int m = s2.size();
            if(s1[n-1]=='S' &&s2[m-1]=='M'||s2[m-1] == 'L') cout<<'<'<<endl;
            else if(s1[n-1]=='M' && s2[m-1]=='S') cout<<'>'<<endl;
            else if(s1[n-1]=='M' && s2[m-1]=='L') cout<<'<'<<endl;
            else if(s1[n-1]=='L' && s2[m-1]=='S' || s2[m-1]=='M') cout<<'>'<<endl;
        }
    }
}