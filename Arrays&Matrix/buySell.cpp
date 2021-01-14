#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& price) {
        int n=price.size();
        int minprice=INT_MAX;
        int maxprofit=0;
        for(int i=0;i<n;i++)
        {
            if(price[i]<minprice)
                minprice=price[i];
            else if(price[i]-minprice > maxprofit)
                maxprofit=price[i]-minprice;
        }
        return maxprofit;
        
    }
};
int main(){
    //drivers code.
    return 1;
}