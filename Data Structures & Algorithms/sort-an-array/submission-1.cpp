class Solution { public: vector<int> sortArray(vector<int>& nums) { 
    int f = 0;
     int s = 1; 
     int l = nums.size(); 
     while(l>0) {
         while(s<l) {
             if(nums[s]<nums[f]) { 
                swap(nums[f],nums[s]); f++; s++; 
                } else
                { 
                    f++; 
                    s++; }
                 } f = 0; 
                 s = 1; l--;
                  } return nums;
                   } 
                   };