1#include <string>
2
3class Solution {
4public:
5    string reverseWords(string s) {
6        s = " " + s;
7        string ans;
8        int i = s.size() - 1;
9
10        //remove end spaces
11        while(i >= 0 && s[i] == ' '){
12            i--;
13        }
14
15        while(i >= 0){
16            int end = i;
17
18            while(i >= 0 && s[i] != ' '){
19                i--;
20            }
21
22            int start = i+1;
23
24            if(!ans.empty()){
25                ans.push_back(' ');
26            }
27            ans += s.substr(start, end - start + 1);
28
29            while (i >= 0 && s[i] == ' '){
30                i--;
31            }
32        }
33        
34        return ans;        
35    }
36};