//Find duplicates in an array

#include <bits/stdc++.h>

using namespace std;

vector<int> duplicates(int arr[], int n);

int main() {

int t;

 cin >> t;

while (t--> 0){ 

int n;

cin >> n;

int a[n];

for (int i = 0; i<n; i++) cin >> a[i];

vector <int> ans = duplicates(a, n); for (int i : ans) cout << i << "";

cout << endl;

}

return 0;

}
vector<int> duplicates(int a[], int n) {

    vector<int> duplicate;

     for (int i = 0; i < n; i++) 

    {

        int index = a[i] % n;

        a[index] += n;

    }

    for (int i = 0; i < n; i++)

    {

        if ((a[i] / n) >= 2)

            duplicate.push_back(i);

            

    }

    if(duplicate.size()==0)

        duplicate.push_back(-1);

    return duplicate;

}

