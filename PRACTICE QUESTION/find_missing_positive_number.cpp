#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      //sort(nums.begin(),nums.end());
      int maxi=0,isum=0,arrsum=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]>0)
          arrsum=arrsum+nums[i];
          if(maxi<nums[i]){
              maxi=nums[i];
          }
      }
      cout<<arrsum<<endl;
      for(int i=1;i<=maxi;i++){
          isum=isum+i;
      }
    int ans=isum-arrsum;
    if(ans!=0){
        return ans;
    }
    return maxi+1;
    }
};
int main()
{
    return 0;
}
