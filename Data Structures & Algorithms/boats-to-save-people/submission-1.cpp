class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        sort(people.begin(),people.end());

        int first = 0;
        int second = people.size()-1;
        int p = 0;

        while(first <= second)
        {

           if(limit==people[second])
           {
            p++;
            second--;
           }
           else if(people[first]+ people[second]<=limit)
           {
              first++;
              p++;
              second--;
           }
          else if(people[first]+ people[second]>limit)
           {
             p++;
                second--;
           }
          
         


        }
        return p;
        
    }
};