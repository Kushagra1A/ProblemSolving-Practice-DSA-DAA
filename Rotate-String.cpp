1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4
5        if(s.size() != goal.size()) return false;
6        int n = s.size();
7
8        for(int start = 0; start < n; start++){
9            if(s[0] != goal[start]){
10                continue;
11            }
12
13            bool ok = true;
14            for(int i = 0; i < n; i++){
15                if(s[i] != goal[(start + i) % n]){
16                    ok = false;
17                    break;
18                }
19            }
20            if (ok) return true;
21        }
22        return false;
23    }
24};