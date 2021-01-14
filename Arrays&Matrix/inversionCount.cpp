
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends

// Function to find inversion count in the array

// arr[]: Input Array
// N : Size of the Array arr[]

long long countMerge(long long A[], long long l, long long mid, long long h)
{
long long n1 = mid - l + 1;
long long n2 = h - mid;
long long int res = 0;
long long left[n1];
long long right[n2];

long long i ,j, k = l;
for(i = 0 ; i < n1 ; i++)
left[i] = A[l+i];

for(j = 0 ; j < n2 ; j++)
right[j] = A[mid+j+1];

i = 0, j = 0;
while(i < n1 && j < n2)
{
if(left[i] <= right[j])
{
A[k++] = left[i++];
}
else
{
A[k++] = right[j++];
res += n1-i;
}
}
while(i < n1)
A[k++] = left[i++];
while(j < n2)
A[k++] = right[j++];

return res;
}

long long int countInversion(long long A[],long long l, long long h)
{
long long int res = 0;
if(l < h)
{
int mid = l+(h-l)/2;

res += countInversion(A,l,mid);
res += countInversion(A,mid+1,h);
res += countMerge(A,l,mid,h);
}
return res;
}
long long int inversionCount(long long A[],long long N)
{
long long int res = countInversion(A,0,N-1);
return res;
}



// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        
        cout << inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends