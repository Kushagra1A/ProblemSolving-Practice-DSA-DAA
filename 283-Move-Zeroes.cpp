class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        int i = 0;
        int n = nums.size();

        while(j < n && i < n-1){
            if(nums[i] == 0){
                j = i+1;
                while(j < n && nums[j] == 0){
                    j++;
                }
                if(j >= n) break;
                swap(nums[i], nums[j]);
            }
            i++;
        }
    }
};