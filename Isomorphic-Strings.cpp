1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        if(s.size() != t.size()) return false;
5
6        unordered_map<char,char>mpp;
7        bool used[256] = {false};
8
9        for(int i = 0; i < s.size(); i++){
10            char a = s[i];
11            char b = t[i];
12            if(!mpp.count(a)){//means unmapped
13                if(!used[b]){
14                    mpp[a] = b;
15                    used[b] = 1;
16                }
17                else{
18                    return false;
19                }
20            }
21            else{
22                if(mpp[a] != b){
23                    return false;
24                }
25            }
26        }
27
28        return true;
29        
30    }
31};