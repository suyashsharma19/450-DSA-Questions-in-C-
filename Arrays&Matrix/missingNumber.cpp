//Missing number in array 

//Expected Time Complexity: O(N).

//Expected Auxiliary Space: O(1).
// Driver Code Starts

// Initial template for C++



#include <bits/stdc++.h>

using namespace std;



int MissingNumber(vector<int>& array, int n);



// Position this line where user code will be pasted.



int main() {

    int t;

    cin >> t;

    while (t--) {

        int n;

        cin >> n;



        vector<int> array(n - 1);

        for (int i = 0; i < n - 1; ++i) cin >> array[i];



        cout << MissingNumber(array, n) << "\n";

    }

    return 0;

}// } Driver Code Ends





// User function template for C++



int MissingNumber(vector<int>& array, int n) {

sort(array.begin(), array.end());

    

    for(int i=1;i<n;i++)

    {

        if(i!=array[i-1])

            return i;

    }

}