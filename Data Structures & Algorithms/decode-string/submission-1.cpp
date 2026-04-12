class Solution {
public:
    string decodeString(string s) {
         vector<string> stack;
        vector<string> newl;
        int k = 0;
        int p = 0;
        int m = 0;

        while (k < s.length()) {
            stack.push_back(string(1, s[k]));

            if (!stack.empty() && stack.back() == "]") {
                stack.pop_back();

                while (!stack.empty() && stack.back() != "[") {
                    newl.push_back(stack.back());
                    stack.pop_back();
                }

                if (!stack.empty()) stack.pop_back();

              string num = "";

// collect all digits
while (!stack.empty() && isdigit(stack.back()[0])) {
    num = stack.back() + num;   // build number in correct order
    stack.pop_back();
}

if (!num.empty()) {
    p = stoi(num);
}

                reverse(newl.begin(), newl.end());

                m = 0;
                while (m < p) {
                    for (auto &x : newl) {
                        stack.push_back(x);
                    }
                    m++;
                }

                newl.clear();
            }
            k++;
        }

        string str;
        for (auto &x : stack) str += x;
        return str;
    }
};