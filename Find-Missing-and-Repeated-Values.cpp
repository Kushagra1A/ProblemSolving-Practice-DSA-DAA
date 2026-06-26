1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
4        
5        long long n = grid.size();
6        long long total_elements = n * n; // This is our 'N'
7        
8        // 1. Calculate Expected Sums using total_elements
9        long long t_sum = total_elements * (total_elements + 1) / 2;
10        long long ts_sum = total_elements * (total_elements + 1) * (2 * total_elements + 1) / 6;
11        
12        long long a_sum = 0;
13        long long as_sum = 0;
14        
15        // 2. Accumulate Actual Sums from the 2D grid
16        for(int i = 0; i < n; i++) {
17            for(int j = 0; j < n; j++) {
18                long long val = grid[i][j];
19                a_sum += val;
20                as_sum += val * val;
21            }
22        }
23        
24        // 3. Apply your exact substitution equations (using long long to prevent overflow)
25        long long c1 = t_sum - a_sum;       // X - Y
26        long long c2 = ts_sum - as_sum;     // X^2 - Y^2
27        long long c3 = c2 / c1;             // X + Y
28        
29        int x = (c3 + c1) / 2;              // Missing Number
30        int y = c3 - x;                     // Repeating Number
31        
32        // LeetCode expects [Repeating, Missing]
33        return {y, x};
34    }
35};