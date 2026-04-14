class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int nsize = heights.size();

        vector<pair<int,int>> abc;
        vector<int> newl(nsize, 0);
        int p = nsize;

        vector<pair<int,int>> abd;
        vector<int> newll(nsize, 0);
        int n = 0;

      
        while (p > 0)
        {
            p--;

            while (!abc.empty() && heights[p] <= abc.back().first)
            {
                abc.pop_back();
            }

            if (abc.empty())
                newl[p] = nsize - p - 1;   
            else
                newl[p] = abc.back().second - p - 1;

            abc.push_back({heights[p], p});
        }

       
        while (n < nsize)
        {
            while (!abd.empty() && heights[n] <= abd.back().first)
            {
                abd.pop_back();
            }

            if (abd.empty())
                newll[n] = n;   
            else
                newll[n] = n - abd.back().second - 1;

            abd.push_back({heights[n], n});
            n++;
        }

        int maxi = 0;

        for (int i = 0; i < nsize; i++)
        {
            int width = newl[i] + newll[i] + 1;
            int area = width * heights[i];
            maxi = max(maxi, area);
        }

        return maxi;
    }
};