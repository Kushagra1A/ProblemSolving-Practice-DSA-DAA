1class Solution {
2public:
3    int minimumPrefixLength(vector<int>& nums) {
4        int n = nums.size();
5        int count = 0;
6        
7        int i = 0; //0th index
8        int j = 1; //1st index
9        while(j < n){
10            if(nums[j] > nums[i]){
11                i++;
12                j++;
13            }
14            else{
15                count = j;
16                i++;
17                j++;
18            }
19        }
20
21        return count;
22    }
23};