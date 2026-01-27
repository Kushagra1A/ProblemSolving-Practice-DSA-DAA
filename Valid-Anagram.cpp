1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()){
5            return false;
6        }
7
8        int freq[256] = {0};
9
10        for(int i = 0; i < s.size(); i++){
11            int val = s[i];
12            freq[val]++;
13        }
14
15        for(int i = 0; i < t.size(); i++){
16            int val = t[i];
17            freq[val]--;
18            if(freq[val] < 0){
19                return false;
20            }
21        }
22
23        return true;
24    }
25};