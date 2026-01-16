1#include <stack>
2#include <string>
3
4class Solution {
5public:
6    string removeOuterParentheses(string s) {
7        stack<char>st;
8        string ans;
9        int start = 0;
10        int n = s.size();
11
12        for(int i = 0; i < n; i++){
13            if(s[i] == '('){
14                st.push(s[i]); //has to be '(' always
15            }
16            else{
17                st.pop();
18            }
19
20            if(st.empty()){ //means we encountered first decomposition at ith
21                //we store this string from 0th to 5th and then from 5th to 9th index       
22                ans = ans + s.substr(start + 1, i - start - 1);
23                start = i+1;
24            }
25        }
26
27        return ans;
28    }
29};