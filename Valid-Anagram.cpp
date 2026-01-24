1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.size() != t.size()) return false;
5        //unordered_map<char,int>mpp;
6        int freq[26] = {0};
7
8        for (char c : s) {
9            freq[c - 'a']++;
10        }
11
12        for (char c : t) {
13            freq[c - 'a']--;
14            if (freq[c - 'a'] < 0) return false;
15        }
16
17        return true;
18    }
19};