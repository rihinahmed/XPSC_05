#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define nl '\n'
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string tmp = s;
        reverse(tmp.begin(),tmp.end());
        bool flag1 = true,flag2 = true;
        for(ll i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])
            {
                if(s[i]<s[s.size()-1-i]) flag1 = false;
                else if(s[s.size()-1-i]<s[i]) flag2 = false;
                break;
            }
        }
 
        if(!flag2) cout<<tmp+s<<endl;
        else cout<<s<<endl;
        //else 
    }
}