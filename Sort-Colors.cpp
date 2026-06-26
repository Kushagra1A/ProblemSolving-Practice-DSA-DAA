1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        
5        int cnt_zero = 0;
6        int cnt_one = 0;
7        int cnt_two = 0;
8
9        int n = nums.size();
10
11        for(int i = 0; i < n; i++){
12            if(nums[i] == 0){
13                cnt_zero++;
14            }
15            else if(nums[i] == 1){
16                cnt_one++;
17            }
18            else{
19                cnt_two++;
20            }
21        }
22
23        for(int i = 0; i < n; i++){
24            if(cnt_zero != 0){
25                nums[i] = 0;
26                cnt_zero--;
27                continue;
28            }
29            if(cnt_one != 0){
30                nums[i] = 1;
31                cnt_one--;
32                continue;
33            }
34            if(cnt_two != 0){
35                nums[i] = 2;
36                cnt_two--;
37                continue;
38            }
39        }
40    }
41};