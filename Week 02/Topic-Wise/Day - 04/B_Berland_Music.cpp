#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define spc " "
#define pf push_front
#define endl cout<<"\n";
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
    int t;cin>>t;
    while(t--)   
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        string s;
        cin>>s;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>like,dislike;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                dislike.push({v[i],i});
            }
            if(s[i]=='1')
            {
                like.push({v[i],i});
            }
        }

        int rating = 1;
        vector<int>ans(n);
        while(!dislike.empty())
        {
            int idx = dislike.top().second;
            dislike.pop();
            ans[idx] = rating++;
        }

        while(!like.empty())
        {
            int idx = like.top().second;
            like.pop();
            ans[idx] = rating++;
        }

        for(auto val:ans)
        {
            cout<<val<<" ";
        }
        endl;

        // while(!like.empty())
        // {
        //     cout<<like.top().first<<" -> "<<like.top().second<<endl;
        //     like.pop();
        // }
        // while(!dislike.empty())
        // {
        //     cout<<dislike.top().first<<" -> "<<dislike.top().second<<endl;
        //     dislike.pop();
        // }
        // cout<<endl;
    }
}