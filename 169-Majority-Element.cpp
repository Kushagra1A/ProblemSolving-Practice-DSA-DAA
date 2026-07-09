class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = nums[0];
        int count = 1; //for whatever number nums[0] is

        for(int i = 1; i < n; i++){
            if(count == 0){
                candidate = nums[i];
            }

            if(nums[i] == candidate){
                count++;
            }
            else{
                count--;
            }
        }

        return candidate;
    }
};