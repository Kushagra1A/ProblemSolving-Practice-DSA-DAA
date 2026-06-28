1#include <vector>
2#include <algorithm>
3using namespace std;
4
5class Solution {
6public:
7    int maxSubArray(vector<int>& nums) {
8        int n = nums.size();
9        int sum = 0;
10        int maxsum = INT_MIN;
11
12        for(int i = 0; i < n; i++){
13            sum = sum + nums[i];
14            maxsum = max(maxsum, sum);
15
16            if(sum < 0) sum = 0;
17        }
18
19        return maxsum;
20    }
21};
22