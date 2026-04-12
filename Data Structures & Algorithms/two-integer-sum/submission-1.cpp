class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

     int end = nums.size()-1;
     vector<int>y;
        
            int a =0;
            int b = 1;
            while(a<end){

                    if(b>end )
                    {
                        a++;
                        b=a+1;
                    }
                    else if(nums[a]+nums[b]==target)
                    {
                    
                     y.push_back(a);
                     y.push_back(b);
                   
                      return y;
                      
                     }
                     else
                     {

                        b++;
                     }
        
            }
          
    }
};
