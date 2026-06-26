1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        
5        int n = grid.size();
6        vector<int> dupe(n*n, 0);
7        int missing = -1;
8        int repeat = -1;
9
10        for(int i = 0; i < n; i++){
11            for(int j = 0; j < n; j++){
12                dupe[grid[i][j]-1] += 1;
13            }
14        }
15
16        for(int i = 0; i < n*n; i++){
17            if(dupe[i] == 0){
18                missing = i+1;
19            }
20            if(dupe[i] == 2){
21                repeat = i+1;
22            }
23        }
24
25        return {repeat, missing};
26    }
27};