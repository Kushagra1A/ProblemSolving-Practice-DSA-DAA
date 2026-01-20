1#include <algorithm>
2class Solution {
3public:
4    int lengthOfLongestSubstring(string s) {
5
6        int n = s.size();
7        int ans = 0;
8        for(int i = 0; i < n; i++){
9
10            string substr = "";
11            int hashmap[256] = {0};
12
13            for(int j = i; j < n; j++){
14                substr += s[j];
15                if(hashmap[s[j]] != 1){
16                    int val = s[j]; //conversion to ASCII value of chars
17                    hashmap[val] = 1;
18                    ans = max(ans, (int)substr.size());
19                }
20                else{
21                    break;
22                }
23            }
24        }
25
26        return ans;
27    }
28};