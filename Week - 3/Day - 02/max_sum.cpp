//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int sum = 0;
        int ans = INT_MIN;
        int l = 0, r = 0;
        while(r!=arr.size())
        {
            sum+=arr[r];
            if(r-l+1 == k)
            {
                ans = max(ans,sum);
                sum-=arr[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        int ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends