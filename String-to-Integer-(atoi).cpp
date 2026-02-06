1class Solution {
2public:
3    int myAtoi(string s) {
4        int n = s.size();
5        int i = 0;
6        bool sign = true;
7        long long ans = 0;
8
9        while(i < n && s[i] == ' '){
10            i++;
11        }
12
13        if(i == n) return ans;
14
15        if(s[i] == '-' || s[i] == '+'){
16            if(s[i] == '-'){
17                sign = false;
18            }    
19            i++;
20        }
21
22        while(i < n && isdigit(s[i])){
23            ans = ans*10 + (s[i] - '0');
24
25            if(sign && ans > INT_MAX) return INT_MAX;
26            if(!sign && -ans < INT_MIN) return INT_MIN;
27
28            i++;
29        }
30
31        if(sign){
32           return ans; 
33        }
34        else{
35            return -ans;
36        }
37
38    }
39};