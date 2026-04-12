class Solution {
public:
    int maxArea(vector<int>& heights) {
         int first = 0;                     
        int second = heights.size() - 1;    
        int x ;
        int y ;
        int p ;
        int maxi = 0 ;                         

        while(first <= second)
        {
            x = second-first;
          y = min(heights[first], heights[second]);
            p = x*y;
            maxi = max(maxi,p);

            
            if(heights[first] < heights[second] )
            {
                first++;   
            }
      else{
            second--;
      }
            
        }

        return maxi; 
    }
};
