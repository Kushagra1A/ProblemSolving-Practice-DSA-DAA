class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(), nums.end());
        int n = nums.size();
        int count = 1;
        int ans = 1;

        if(nums.size() == 0){
            return 0;
        }

        for(int num: st){
            if(st.find(num-1) == st.end()){
                while(st.find(num + 1) != st.end()){
                    count++;
                    num++;
                }
                ans = max(count, ans);
                count = 1;
            }
        }
        return ans;

    }
};