1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4
5        int n = strs.size();
6        string ans = "";
7
8        if(n == 0){
9            return "";
10        }
11
12        sort(strs.begin(), strs.end());
13
14        string s1 = strs[0];
15        string s2 = strs[n-1];
16
17        int m = min(s1.size(), s2.size());
18
19        for(int i = 0; i < m; i++){
20            if(s1[i] == s2[i]){
21                ans.push_back(s1[i]);
22            }
23            else{
24                break;
25            }
26        }
27
28        return ans;
29    }
30};