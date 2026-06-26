1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        
5        int n = nums.size();
6        int low = 0; 
7        int high = n - 1;
8        int mid = 0;
9
10        while(mid <= high){
11            if(nums[mid] == 0){
12                swap(nums[low], nums[mid]);
13                low++;
14                mid++;
15            }
16            else if(nums[mid] == 1){
17                mid++;
18            }
19            else{
20                swap(nums[high], nums[mid]);
21                high--;
22            }
23        }
24    }
25};