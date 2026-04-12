class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           if (strs.empty()) return "";
        string x="";
        sort(strs.begin(),strs.end());

        for(int i = 0 ; i<strs[0].size();i++)
        {
            if(strs[0][i]==strs[strs.size()-1][i])
{
         x += strs[0][i];
}
else
{
break;
}

        }

        return x;
    }
};