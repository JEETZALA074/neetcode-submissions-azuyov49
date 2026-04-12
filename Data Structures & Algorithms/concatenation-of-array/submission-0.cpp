class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int p = 2*nums.size();
        int x =0;
        int y =0;
        while(y<p+1)
        {
            if(x<nums.size()){
           ans.push_back(nums[x]);
             
            }
          else
          {
            x =-1;
          }

x++;
y++;



        }
 return ans;
    }
};