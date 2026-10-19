class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }

        int l = 0;
        sort(nums.begin(), nums.end());
        
        while(l < nums.size()){
            if(nums[l] == nums[l+1]){
                l += 2;
            }
            else{
                break;
            }
        }

        return nums[l];
    }
};