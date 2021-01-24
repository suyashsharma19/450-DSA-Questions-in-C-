
 // } Driver Code Ends
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int row=0;
	    int place=0;
	    int min=INT_MAX;
	   for(int i=0;i<n;i++)
	   {
	       place=lower_bound(arr[i].begin(),arr[i].end(),1)-arr[i].begin();//first occurence of 1
	       if(min>place && place<m){
	            min=place;
	            row=i;
	       }
	       
	   }
	   if(min==INT_MAX)
	        return -1;
    return row;
        
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends