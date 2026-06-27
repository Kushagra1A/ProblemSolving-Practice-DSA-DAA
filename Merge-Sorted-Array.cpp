1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        
5        int c = 0;
6        for(int i = m; i < nums1.size(); i++){
7            nums1[i] = nums2[c];
8            c++;
9        }
10
11        sort(nums1.begin(), nums1.end());
12    }
13};