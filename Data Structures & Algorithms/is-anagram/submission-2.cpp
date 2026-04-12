#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        // 1️⃣ If lengths are not equal → can't be anagrams
        if (s.length() != t.length())
            return false;

        // 2️⃣ Use unordered_map to count frequency of each character
        unordered_map<char, int> freq;

        // 3️⃣ Count characters in string s
        for (char c : s) {
            freq[c]++;
        }

        // 4️⃣ Subtract the count for each character in t
        for (char c : t) {
            freq[c]--;
        }

        // 5️⃣ If all counts are zero → strings are anagrams
        for (auto it : freq) {
            if (it.second != 0)
                return false;
        }

        return true;
    }
};

