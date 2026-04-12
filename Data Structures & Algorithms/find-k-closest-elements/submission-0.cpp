class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int i = 0;
        vector<int> win;

        for (int j = 0; j < arr.size(); j++) {
            if (win.size() < k) {

             win.push_back(arr[j]);
            } else {
            if (abs(win[0] - x) > abs(arr[j] - x)) {
              win.erase(win.begin());


          win.push_back(arr[j]);



                    i++;
         }
            }
        }
        return win;
    }
};
