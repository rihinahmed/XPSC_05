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
        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            cnt[x]++;
        }
        priority_queue<int>pq;
        for(auto it = cnt.begin();it!=cnt.end();it++)
        {
            pq.push(it->second);
        }

        while(!pq.empty())
        {
            if(pq.size()<2) break;
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x>=1) pq.push(x);
            if(y>=1) pq.push(y);
        }

        int ans = 0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
}