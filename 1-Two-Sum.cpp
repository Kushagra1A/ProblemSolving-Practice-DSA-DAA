class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n = nums.size();
        vector<int>ans;

        for(int i = 0; i < n; i++){
            int curr = nums[i];
            int rem = target - curr;

            if(mpp.find(rem) != mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[rem]);
                break;
            }
            else{
                mpp[nums[i]] = i;
            }
        }

        return ans;

    }
};