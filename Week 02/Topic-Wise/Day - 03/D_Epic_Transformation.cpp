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
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            dq.push_back(x);
        }

        sort(dq.begin(),dq.end());

        for(auto num:dq)
        {
            cout<<num<<" ";
        }
        cout<<endl;
        int f = 0;
        int l = n-1;

        for(int i=0;i<n/2;i++)
        {
            if(dq[f]!=dq[l])
            {
                dq.pop_front();
                dq.pop_back();
                f++;
                l--;
            }
        }

        cout<<dq.size()<<endl;
    }
}