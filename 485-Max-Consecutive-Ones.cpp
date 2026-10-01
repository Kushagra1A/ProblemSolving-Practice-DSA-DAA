class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n = arr.size();

        if(n == 1 && arr[0] == 0){
            return 0;
        }

        int count = 0;
        int maxcount = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                count = 0;
            }
            else{
                count++;
                maxcount = max(maxcount, count);
            }
        }
        
        return maxcount;
    }
};