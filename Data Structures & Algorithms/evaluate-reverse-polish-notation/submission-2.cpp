class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        

        stack<int> st;

        for(int  i =0 ; i< tokens.size();i++)
        {
             if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") 
             {
                st.push(stoi(tokens[i]));
             }

             else if(tokens[i] == "+")
             {
                  int a = st.top(); st.pop();
                int b = st.top();
                st.pop();
                st.push(a + b);
             }
             else if(tokens[i] == "-")
             {
                 int c = st.top(); st.pop();
                int d = st.top();
                st.pop();
                st.push(d - c);

             }
               else if(tokens[i] == "*")
             {
                 int e = st.top(); st.pop();
                int f = st.top();
                st.pop();
                st.push(e*f);

             }
                else if(tokens[i] == "/")
             {
                 int g = st.top(); st.pop();
                int h = st.top();
                st.pop();
                st.push(h/g);

             }
             




        }
        int ans = st.top();

        return ans;
    }
};
