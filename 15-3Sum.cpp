class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;

        for(int i = 0 ; i < n-2; i++){
            if (i > 0 && nums[i] == nums[i-1]) {
                continue; 
            }
            int j = i+1;
            int k = n-1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == 0){
                    //we found 1st triplet
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    int jcons = nums[j];
                    int kcons = nums[k];
                    while(j < k && jcons == nums[j]){
                        j++;
                    }
                    while(j < k && kcons == nums[k]){
                        k--;
                    }
                }
                else if(sum < 0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }

        return ans;
    }
};