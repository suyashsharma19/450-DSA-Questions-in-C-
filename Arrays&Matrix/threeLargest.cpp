 // C++ program for find the largest  three elements in an array 

//Expected	time	complexity	is	O(n)	and	extra	space	is	O(1).

#include <bits/stdc++.h> 

using namespace std; 



// Function to print three largest elements 

void print3largest(int arr[], int arr_size) 

{ 

	int first, second, third; 



	// There should be atleast three elements 

	if (arr_size < 3) 

	{ 

		cout << " Invalid Input "; 

		return; 

	} 



	third = first = second = INT_MIN; 

	for(int i = 0; i < arr_size; i++) 

	{ 

		

		// If current element is 

		// greater than first 

		if (arr[i] > first) 

		{ 

			third = second; 

			second = first; 

			first = arr[i]; 

		} 



		// If arr[i] is in between first 

		// and second then update second 

		else if (arr[i] > second) 

		{ 

			third = second; 

			second = arr[i]; 

		} 



		else if (arr[i] > third) 

			third = arr[i]; 

	} 



	cout << "Three largest elements are "

		<< first << " " << second << " "

		<< third << endl; 

} 



// Driver code 

int main() 

{ 

	int arr[] = { 12, 13, 1, 10, 34, 1 }; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	

	print3largest(arr, n); 

	return 0; 

} 

// Method 2 
// An efficient way to solve this problem is to use any O(nLogn) sorting algorithm & simply returning the last 3 largest elements.

// // C++ code to find largest 

// // three elements in an array 

// #include <bits/stdc++.h> 

// using namespace std; 



// void find3largest(int arr[], int n) 

// { 

// 	sort(arr, arr + n); // It uses Tuned Quicksort with 

// 	// avg. case Time complexity = O(nLogn) 



// 	int check = 0, count = 1; 



// 	for (int i = 1; i <= n; i++) { 



// 		if (count < 4) { 

// 			if (check != arr[n - i]) { 

// 				// to handle duplicate values 

// 				cout << arr[n - i] << " "; 

// 				check = arr[n - i]; 

// 				count++; 

// 			} 

// 		} 

// 		else

// 			break; 

// 	} 

// } 



// // Driver code 

// int main() 

// { 

// 	int arr[] = { 12, 45, 1, -1, 45, 54, 23, 5, 0, -10 }; 

// 	int n = sizeof(arr) / sizeof(arr[0]); 

// 	find3largest(arr, n); 

// } 



