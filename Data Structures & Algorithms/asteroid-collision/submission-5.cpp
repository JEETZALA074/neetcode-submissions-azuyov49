class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++) {

            if(asteroids[i] > 0) {
                st.push(asteroids[i]);
            }
            else {
                if(st.empty()) {
                    st.push(asteroids[i]);
                }
                else if(st.top() > 0 && abs(asteroids[i]) == st.top()) {
                    st.pop();
                }
                else if(st.top() > 0 && abs(asteroids[i]) > st.top()) {
                    st.pop();
                    i--;
                }
                else if(st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }

        vector<int> ans(st.size());
        for(int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
