1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        //TORTOISE AND HARE METHOD
5        int n = nums.size();
6        
7        int slow = nums[0];
8        int fast = nums[0];
9
10        //1st encounter
11        do{
12            slow = nums[slow];
13            fast = nums[nums[fast]];
14        }while(slow != fast);
15
16        slow = nums[0];
17
18        while(slow != fast){
19            slow = nums[slow];
20            fast = nums[fast];
21        }
22
23        return fast;
24    }
25};