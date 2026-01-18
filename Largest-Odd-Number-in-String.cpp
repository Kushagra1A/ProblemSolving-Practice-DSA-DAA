1#include <iostream>
2class Solution {
3public:
4    string largestOddNumber(string num) {
5        string ans = "";
6
7        for(int i = num.size() - 1; i >= 0; i--){
8            int digit = num[i] - '0';
9            if(digit % 2 == 1){
10                ans = num.substr(0,i+1);
11                return ans;
12            }
13        }
14
15        return "";
16    }
17};