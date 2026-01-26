1class Solution {
2public:
3    vector<int> rotateElements(vector<int>& nums, int k) {
4        vector<int>arr;
5        vector<int>ansarr;
6        
7        for(int i = 0; i < nums.size(); i++){
8            if(nums[i] >= 0){
9                arr.push_back(nums[i]); //stores out +ve integers
10            }
11        }
12
13        if(arr.size() == 1 || arr.size() == 0){
14            return nums;
15        }
16
17        ansarr = arr;
18        
19        int n = arr.size();
20        
21        k = (k)%n; //no of lshifts
22        int rshifts = n - k; //no of rshifts
23
24        for(int i = 0; i < n; i++){
25            ansarr[(i + rshifts)%n] = arr[i];
26        }
27
28        int j = 0;
29        
30        for(int i = 0; i < nums.size(); i++){
31            if(nums[i] >= 0){
32                nums[i] = ansarr[j];
33                j++;
34            }
35        }
36
37        return nums;
38    }
39};