class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
           int x = 0;
   int y = 0;
   int an = INT_MIN;
   vector<int>ans;
   for(int i =0 ; i < nums.size();i++)
   {
       an = max(an , nums[i]);
       if(i - x+1 ==k)
       {
           
           ans.push_back(an);
           x++;
           an =INT_MIN;
           i = x-1;
       }
       
       
     
   }
    return ans; 
    }
};
