1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& mat) {
4        int n = mat.size();
5        int m = mat[0].size();
6        vector<int>cols(m, 0);
7        vector<int>rows(n, 0);
8        
9        for(int i = 0; i < n; i++){
10            for(int j = 0; j < m; j++){
11                
12                if(mat[i][j] == 0){
13                    rows[i] = 1;
14                    cols[j] = 1;
15                }
16            }
17        }
18        
19        for(int i = 0; i < n; i++){
20            for(int j = 0; j < m; j++){
21                if(rows[i]  == 1 || cols[j] == 1){
22                    mat[i][j] = 0;
23                }
24            }
25        }
26    }
27};