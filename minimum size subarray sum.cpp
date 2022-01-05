class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
          int i=0,j=0;
      int sum=0;
       int minsize=INT_MAX;
         while(j<nums.size()){
             sum+=nums[j];
           
            if(sum>=target){
                while(sum>=target){
                   sum-=nums[i];
                  i++;
                }
               i--;
              sum+=nums[i];
              minsize=min(minsize,j-i+1);
            }
           j++;
         }
      return minsize==INT_MAX?0:minsize;
    }
};