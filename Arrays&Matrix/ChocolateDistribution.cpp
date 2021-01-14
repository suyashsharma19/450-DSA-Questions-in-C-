//Chocolate Distribution Problem

 #include <bits/stdc++.h>

using namespace std;



int main() {

	int t;

	cin>>t;

	while(t--)

	{

	    int n,m;

	    cin>>n;

	    int a[n];

	    for(int i=0;i<n;i++)cin>>a[i];

	    cin>>m;

	    if(m>n)return 0;

	    sort(a,a+n);

	    int sum=a[m-1]-a[0];

	    for(int i=1;i<=(n-m);i++)

	    {

	        int j=i+(m-1);

	        if(sum>(a[j]-a[i]))

	            sum=a[j]-a[i];

	    }

	    cout<<sum<<"\n";

	    

	}

	return 0;

}