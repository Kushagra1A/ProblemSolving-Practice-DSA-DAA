1#include <string>
2
3class Solution {
4public:
5    string removeOuterParentheses(string s) {
6        string ans;
7        int n = s.size();
8        int depth = 0;
9
10        for(int i = 0; i < n; i++){
11            if(s[i] == '('){
12                if(depth > 0){
13                    ans += s[i];
14                }
15                depth++;
16            }
17            else{
18                if(depth > 1){
19                    ans += s[i];
20                }
21                depth--;
22            }
23        }
24
25        return ans;
26    }
27};