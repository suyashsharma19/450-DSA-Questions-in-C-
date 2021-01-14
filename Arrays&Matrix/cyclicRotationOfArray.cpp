//Cyclically rotate an array by one

 #include <iostream>

using namespace std;



int main() {

	int t;

	cin>>t;

	while(t--)

	{

	    int n;

	    cin>>n;

	    int arr[n];

	    for(int i=0;i<n;i++)

	    {

	        cin>>arr[i];

	    }

	    int x=n-1;

	    cout<<arr[n-1]<<" ";

	    for(int i=0;i<x;i++)

	    {

	        cout<<arr[i]<<" ";

	    }

	    cout<<"\n";

	}

	return 0;

}