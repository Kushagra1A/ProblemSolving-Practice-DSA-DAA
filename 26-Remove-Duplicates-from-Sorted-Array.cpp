class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;

        ans.push_back(nums[0]);

        for(int i = 1; i < n; i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            }
        }

        int k = ans.size();
        for(int i = 0; i < k; i++){
            nums[i] = ans[i];
        }

        return k;
    }
};