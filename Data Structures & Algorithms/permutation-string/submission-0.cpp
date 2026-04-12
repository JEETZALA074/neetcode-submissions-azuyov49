class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          int k = s1.size();
    int n = s2.size();

    if (k > n) return false;

    unordered_map<char, int> need, window;

    for (char c : s1) {
        need[c]++;
    }

    int l = 0;

    for (int r = 0; r < n; r++) {
        window[s2[r]]++;

        if (r - l + 1 > k) {
            window[s2[l]]--;
            if (window[s2[l]] == 0)
                window.erase(s2[l]);
            l++;
        }

        if (window == need)
            return true;
    }

    return false;
    }
};
