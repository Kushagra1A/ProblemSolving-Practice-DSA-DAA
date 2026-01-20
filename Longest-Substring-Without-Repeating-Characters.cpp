1#include <algorithm>
2class Solution {
3public:
4    int lengthOfLongestSubstring(string s) {
5
6        int n = s.size();
7        int ans = 0;
8        for(int i = 0; i < n; i++){
9
10            //string substr = "";
11            int len = 0;
12            int hashmap[256] = {0};
13
14            for(int j = i; j < n; j++){
15                //substr += s[j];
16                len++;
17                if(hashmap[s[j]] != 1){
18                    int val = s[j]; //conversion to ASCII value of chars
19                    hashmap[val] = 1;
20                    ans = max(ans, len);
21                }
22                else{
23                    break;
24                }
25            }
26        }
27
28        return ans;
29    }
30};