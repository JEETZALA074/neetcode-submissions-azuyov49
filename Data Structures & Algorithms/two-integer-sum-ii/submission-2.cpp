class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int x = 0;
       
       
        int k = numbers.size()-1;
        vector<int>b;
while(x<k){
     int y = numbers.size()-1;
        while(x<y)
        {
           if(numbers[x]+numbers[y]==target)
           {
            b.push_back(x+1);
             b.push_back(y+1);
              return b;

           }
           else 
          {
            y--;
          }



        }
        x++;

}
return b;
    }
};
