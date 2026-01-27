1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if(s.size() != t.size()){
5            return false;
6        }
7
8        //int freq[256] = {0};// do we really need space of 256 just for alphabets? can we try to reduce size?
9        int freq[26] = {0};
10
11        for(int i = 0; i < s.size(); i++){
12            int val = s[i] - 97; //because alphabets start from a = 97
13            freq[val]++;
14        }
15
16        for(int i = 0; i < t.size(); i++){
17            int val = t[i] - 97;
18            freq[val]--;
19            if(freq[val] < 0){
20                return false;
21            }
22        }
23
24        return true;
25    }
26};