#include<bits/stdc++.h>
using namespace std;
// namespace std;

class Solution {
public:
   void findnext(vector<int>& nums,int i)
    {
        reverse(nums.begin()+i+1,nums.end()); //2, 5 4 3 2 1-> 2 , 1 2 3 4 5  
        for(int k=i+1;k<nums.size();k++)
            if(nums[k]>nums[i])
            {
                swap(nums[i],nums[k]);   //2 , 1 2 3 4 5  ->3 , 1 2 2 45
                return;
            }
    }
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])           //find next change example : 2, 5 4 3 2 1  :5>2
            {
                findnext(nums,i-1);
                return;
            }
        }
        reverse(nums.begin(),nums.end()); //5 4 3 2 2 1-> 1 2 2 3 4 5
    }
};
int main()
{
    //drivers code
    return 1;
}