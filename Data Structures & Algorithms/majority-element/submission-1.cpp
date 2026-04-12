class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> count;

        for(int i  = 0 ; i<nums.size();i++)
        {
            count[nums[i]]++;
        }
int max = INT_MIN;
int ans ;

         for(auto a:count)
         {
            if(a.second>max)
            {
                       max = a.second;
                       ans = a.first;

            }

    

         }
         return ans;
        
    }
};