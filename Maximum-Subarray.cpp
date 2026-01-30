1#include <vector>
2#include <algorithm>
3using namespace std;
4
5class Solution {
6public:
7    int maxSubArray(vector<int>& nums) {
8        int curr = nums[0];
9        int best = nums[0];
10
11        for (int i = 1; i < (int)nums.size(); i++) {
12            curr = max(nums[i], curr + nums[i]);
13            best = max(best, curr);
14        }
15        return best;
16    }
17};
18