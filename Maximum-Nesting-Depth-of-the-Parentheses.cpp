1class Solution {
2public:
3    int maxDepth(string s) {
4
5        int count = 0, maxi = 0;
6
7        for(int i = 0; i < s.size(); i++){
8
9            if(s[i] == '('){
10                count++;
11                maxi = max(maxi, count);
12            }
13            else if(s[i] == ')'){
14                count--;
15            }
16            else{
17                continue;
18            }
19
20        }
21
22        return maxi;
23    }
24};