class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int n = arr.size();
        int profit = 0;

        if(arr.size() == 1){
            return 0;
        }

        int left = 0;
        int right = 1;

        while(right < n){
            if(arr[left] > arr[right]){
                left = right;
                right++;
            }
            else{
                profit = max(profit, arr[right] - arr[left]);
                right++;
            }
        }

        return profit;

    }
};