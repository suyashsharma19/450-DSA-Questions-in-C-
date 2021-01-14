 

//Spiral Display of a Matrix

#include <bits/stdc++.h> 

using namespace std; 



 // } Driver Code Ends



class Solution

{   

public:     

    vector<int> spirallyTraverse(vector<vector<int> > matrix, int m, int n) 

    {

        vector<int> s;

        int i, k = 0, l = 0;

    /* k - starting row index. m - ending row index. l - starting column index. n - ending column index. i - iterator*/

    while (k < m && l < n) {

        /* Print the first row from the remaining rows */

        for (i = l; i < n; ++i) {

            s.push_back(matrix[k][i]);

        }

        k++;

        /* Print the last column from the remaining columns */

        for (i = k; i < m; ++i) {

            s.push_back(matrix[i][n - 1]);

        }

        n--;

        /* Print the last row from the remaining rows */

        if (k < m) {

            for (i = n - 1; i >= l; --i) {

                s.push_back(matrix[m - 1][i]);

            }

            m--;

        }

        /* Print the first column from the remaining columns */

        if (l < n) {

            for (i = m - 1; i >= k; --i) {

                s.push_back(matrix[i][l]);

            }

            l++;

        }

    }

    return s;

  }

};



// { Driver Code Starts.

int main() {

    int t;

    cin>>t;

    

    while(t--) 

    {

        int r,c;

        cin>>r>>c;

        vector<vector<int> > matrix(r); 



        for(int i=0; i<r; i++)

        {

            matrix[i].assign(c, 0);

            for( int j=0; j<c; j++)

            {

                cin>>matrix[i][j];

            }

        }



        Solution ob;

        vector<int> result = ob.spirallyTraverse(matrix, r, c);

        for (int i = 0; i < result.size(); ++i)

                cout<<result[i]<<" ";

        cout<<endl;

    }

    return 0;

}  // } Driver Code Ends