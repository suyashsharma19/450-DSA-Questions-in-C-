#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
          if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        int j=0;
        vector<vector<int>> result;
        while(j<intervals.size()){
            int low = intervals[j][0];
            int high = intervals[j][1];
            j++;
            while(j<intervals.size() and high >= intervals[j][0]){  
                high = max(intervals[j][1],high);
                j++;
            }
            result.push_back({low , high});
        }
        return result;
    }
};
int main()
{
    //drivers code;
    return 1;
}