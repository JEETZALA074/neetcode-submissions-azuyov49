class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       
        vector<int> ans;
        int x = 0;
        int y;
        while(x<nums.size())
        {

         
if(val != nums[x])
{
  ans.push_back(nums[x]);
}

x++;
        }
         nums = ans;
        y = ans.size();
        return y;
    }
};