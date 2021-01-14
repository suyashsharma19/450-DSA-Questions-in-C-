// C++ program to find common elements between two Vectors using STL 



#include <bits/stdc++.h> 

using namespace std; 



int main() 

{ 



	// Get the vector 

	vector<int> vector1 = { 1, 45, 54, 71, 76, 12 }; 

	vector<int> vector2 = { 1, 7, 5, 4, 6, 12 }; 



	// Sort the vector 

	sort(vector1.begin(), vector1.end()); 

	sort(vector2.begin(), vector2.end()); 



	// Print the vector 

	cout << "First Vector: "; 

	for (int i = 0; i < vector1.size(); i++) 

		cout << vector1[i] << " "; 

	cout << endl; 



	cout << "Second Vector: "; 

	for (int i = 0; i < vector2.size(); i++) 

		cout << vector2[i] << " "; 

	cout << endl; 



	// Initialise a vector 

	// to store the common values 

	// and an iterator 

	// to traverse this vector 

	vector<int> v(vector1.size() + vector2.size()); 

	vector<int>::iterator it, st; 



	it = set_intersection(vector1.begin(), vector1.end(),vector2.begin(),vector2.end(),v.begin()); 

	cout << "\nCommon elements:\n"; 

	for (st = v.begin(); st != it; ++st) 

		cout << *st << ", "; 

	cout << '\n'; 

	return 0; 

} 

 

/*vector<int> common_element(vector<int>v1,vector<int>v2)

{

    sort(v1.begin(),v1.end());

    sort(v2.begin(),v2.end());

    vector<int> v(v1.size() + v2.size());

    vector<int> common;

    vector<int> :: iterator iter,st;

    iter=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

    for (st = v.begin(); st != iter; ++st)

    {

        common.push_back(*st);

    }

    return common;

}

  iter=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

There might be a cleverer way to go about this, but

intersect(intersect(a,b),c)*/