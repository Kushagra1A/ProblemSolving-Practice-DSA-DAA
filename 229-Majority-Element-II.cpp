class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int candidate1, candidate2;
        int count1 = 0;
        int count2 = 0;
        vector<int>ans;

        for(int i = 0; i < nums.size(); i++){
            if(count1 == 0 && nums[i] != candidate2){
                candidate1 = nums[i];
            }
            else if(count2 == 0 && nums[i] != candidate1){
                candidate2 = nums[i];
            }

            if(nums[i] == candidate1){
                count1++;
            }
            else if(nums[i] == candidate2){
                count2++;
            }
            else{
                //none
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == candidate1){
                count1++;
            }
            if(nums[i] == candidate2){
                count2++;
            }
        }

        if(count1 > floor(nums.size()/3)){
            ans.push_back(candidate1);
        }
        if(count2 > floor(nums.size()/3)){
            ans.push_back(candidate2);
        }

        return ans;
    }
};