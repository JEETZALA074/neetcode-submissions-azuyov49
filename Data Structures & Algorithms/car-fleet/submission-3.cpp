class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();

        
        vector<pair<int,int>> cars;
        for(int i = 0; i < n; i++) {
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.rbegin(), cars.rend());

        int max = 0;
        double lastTime = 0;  
        double time;

        // Step 2: single loop (MODIFIED LOGIC)
        for(int i = 0; i < n; i++) {

            time = (double)(target - cars[i].first) / cars[i].second;

            if(time > lastTime) {
                max = max + 1;
                lastTime = time;
            }
        }

        return max;
    }
};
