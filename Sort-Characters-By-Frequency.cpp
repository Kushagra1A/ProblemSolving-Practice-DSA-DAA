1class Solution {
2public:
3    string frequencySort(string s) {
4        string ans = "";
5        unordered_map<char, int>mpp;
6
7        for(char c : s){
8            mpp[c]++;
9        }
10
11        char maxkey;
12        int maxi = 0;
13        
14        while(ans.size() != s.size()){
15            for(auto it: mpp){
16                if(it.second > maxi){
17                    maxi = it.second;
18                    maxkey = it.first;
19                }
20            } // 'e', 2
21
22            while(maxi != 0){
23                ans.push_back(maxkey);
24                maxi--;
25            }
26
27            mpp[maxkey] = 0;;
28        }
29
30        return ans;
31    }
32};