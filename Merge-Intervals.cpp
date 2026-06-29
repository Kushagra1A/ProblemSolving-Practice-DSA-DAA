1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4       int n = intervals.size();
5       vector<vector<int>> dupe;
6       sort(intervals.begin(), intervals.end());
7
8       for(int i = 0; i < n; i++){
9            if(dupe.size() == 0){
10                dupe.push_back(intervals[i]);
11            }
12            else{
13                if(dupe.back()[1] >= intervals[i][0]){
14                    dupe.back()[1] = max(dupe.back()[1], intervals[i][1]);
15                }
16                else{
17                    dupe.push_back(intervals[i]);
18                }
19            }
20        } 
21
22        return dupe;
23    }
24};