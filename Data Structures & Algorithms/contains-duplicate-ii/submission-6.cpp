class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        

       

      int a = 0;
int b = 1;
int r =1;

while(a < nums.size()-1) {
    b = a + 1;
    while(b < nums.size()) {
        if(nums[a] == nums[b] && b-a <= k) {
           return true;
           
        }
        else {
            r = 1;
        }
      b++;
    }

  a++;
}
return false;



    }
};