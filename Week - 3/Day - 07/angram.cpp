//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int syz1 = pat.size();
	    int syz2 = txt.size();
	    
	    vector<int>patfreq(26,0);
	    for(int i=0;i<syz1;i++)
	    {
	        patfreq[pat[i]-'a']++;
	    }
	    vector<int>winfreq(26,0);
	    int cnt = 0;
	    
	    for(int i=0;i<syz1;i++)
	    {
	        winfreq[txt[i]-'a']++;
	    }
	    
	    if(winfreq==patfreq) cnt++;
	    
	    for(int i=syz1;i<syz2;i++)
	    {
	        winfreq[txt[i]-'a']++;
	        winfreq[txt[i-syz1]-'a']--;
	        
	        if(patfreq == winfreq) cnt++;
	    }
	    
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends