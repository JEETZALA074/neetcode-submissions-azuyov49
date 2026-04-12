class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

int k;
      unordered_map<int,int> abc;
vector<int> ans;


      for(int i = 0 ; i<nums.size();i++)
      {

          abc[nums[i]]++;

      }

      for(auto a:abc)
      {

               ans.push_back(a.first);

      }
 nums = ans;
 sort(nums.begin(),nums.end());
 k = nums.size();
 return k;
    }
};