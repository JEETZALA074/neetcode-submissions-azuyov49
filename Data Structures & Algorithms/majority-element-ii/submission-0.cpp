class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans ;
       unordered_map<int, int> jee;

         int x ;
        for(int i = 0 ; i<nums.size();i++)
        {

            jee[nums[i]]++;
        }

        x = nums.size()/3;

        for(auto a :jee)
        {

            if(a.second>x)
            {
               ans.push_back(a.first);
            }
        }
        return ans;
    }

};