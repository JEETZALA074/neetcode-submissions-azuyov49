class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (char &c : s) {
            if(isalnum(c))
            {
    t += toupper(c);
            }
}
       
       
        int x = 0;
        int y = t.length()-1;
        while(x < y)
        {
        if(t[x]==t[y])
        {
            x++;
            y--;
        }
        else
        {
            return false;
        }


        }

return true;
    }
};
