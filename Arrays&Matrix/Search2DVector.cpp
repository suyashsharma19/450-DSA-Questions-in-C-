#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

            vector< vector<int> >::iterator row;

    for (row = matrix.begin(); row != matrix.end(); row++) {
        if(find(row->begin(), row->end(), target) != row->end() )
            return true;
    }

    return false;
}
};
int main()
{
    
    vector<vector<int> >matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int t=11;
    Solution j;
    bool x=j.searchMatrix(matrix,t);
    cout<<x;
    return 0;
}
