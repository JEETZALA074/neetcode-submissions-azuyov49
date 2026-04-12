class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        sort(nums2.begin(), nums2.end());
        
        int one = 0;

        for(int i = nums1.size()-1 ; i>=0 ; i-- )
        {
              if(nums1[i]!=0)
              {
                break;
              }
            else
            {
                  
                nums1[i]=nums2[one];
                 one++;
            }
       
           
        }
     sort(nums1.begin(), nums1.end());
        
    }
};