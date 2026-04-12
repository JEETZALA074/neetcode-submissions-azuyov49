class Solution {
public:
    string mergeAlternately(string word1, string word2) {
 int n1 = word1.length();
  int n2 = word2.length();
  int a =0;
  int b = 0;
 string word3;
 int minimum;
 int maximum;
 minimum = min(n1,n2);
 maximum = max(n1,n2);
     while(a<minimum)
     {

       word3.push_back(word1[a]);
       word3.push_back(word2[a]);
       a++;

     }

     for(int i = a;i<maximum;i++)
     {
        if(n2>n1)
        {
         word3.push_back(word2[i]);
        }
        else
        {
             word3.push_back(word1[i]);
        }
     }
return word3;
        
    }
};