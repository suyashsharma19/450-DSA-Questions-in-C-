#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        for(auto i : nums2) nums1.push_back(i);
        sort(nums1.begin(), nums1.end());
        
        int n = nums1.size() / 2;
        if(nums1.size() % 2 == 0){
            return (double)(nums1[n] + nums1[n - 1]) / 2;
        }
        else{
            return (double)nums1[n];
        }
        
        return 0;
    }
    };
int main()
{
//drivers code
return 1;
}