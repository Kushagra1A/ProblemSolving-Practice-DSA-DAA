class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<vector<int>>ans;

        // 1. First Anchor Loop
        for (int i = 0; i < n - 3; i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // 2. Second Anchor Loop (Nested)
            for (int j = i + 1; j < n - 2; j++) {
                // Skip duplicates for the second element
                // Note: j > i + 1 ensures we don't pick the same starting value for this row
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                // 3. The Moving Pointer Duel
                int left = j + 1;
                int right = n - 1;

                while (left < right) {
                    // Use long long for the sum to prevent integer overflow 
                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});

                        int left_val = nums[left];
                        int right_val = nums[right];

                        // Your signature duplicate skipping logic blocks
                        while (left < right && nums[left] == left_val) {
                            left++;
                        }
                        while (left < right && nums[right] == right_val) {
                            right--;
                        }
                    } 
                    else if (sum < target) {
                        left++; // Need a larger sum
                    } 
                    else {
                        right--; // Need a smaller sum
                    }
                }
            }
        }
        return ans;
    }
};