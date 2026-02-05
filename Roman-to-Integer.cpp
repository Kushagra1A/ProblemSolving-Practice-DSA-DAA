1class Solution {
2public:
3    int romanToInt(string s) {
4        int n = s.size();
5        int sum = 0;
6        unordered_map<char, int>mp;
7        
8        mp.insert({'I', 1});
9        mp.insert({'V', 5});
10        mp.insert({'X', 10});
11        mp.insert({'L', 50});
12        mp.insert({'C', 100});
13        mp.insert({'D', 500});
14        mp.insert({'M', 1000});
15
16        for(int i = n-1; i >= 0; i--){
17            if(i > 0 && s[i] == 'V' && s[i-1] == 'I'){
18                i--;
19                sum += 4;
20            }
21            else if(i > 0 && s[i] == 'X' && s[i-1] == 'I'){
22                i--;
23                sum += 9;
24            }
25            else if(i > 0 && s[i] == 'L' && s[i-1] == 'X'){
26                i--;
27                sum += 40;
28            }
29            else if(i > 0 && s[i] == 'C' && s[i-1] == 'X'){
30                i--;
31                sum += 90;
32            }
33            else if(i > 0 && s[i] == 'D' && s[i-1] == 'C'){
34                i--;
35                sum += 400;
36            }
37            else if(i > 0 && s[i] == 'M' && s[i-1] == 'C'){
38                i--;
39                sum += 900;
40            }
41            else{
42                sum += mp[s[i]];
43            }
44        }
45
46        return sum;
47    }
48};