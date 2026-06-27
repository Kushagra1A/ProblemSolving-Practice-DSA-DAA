1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        
5        int p3 = m+n-1;
6        int p1 = m-1;
7        int p2 = n-1;
8
9        while(p2 >= 0){
10            if(p1 >= 0 && nums1[p1] > nums2[p2]){
11                nums1[p3] = nums1[p1];
12                p3--;
13                p1--;
14            }
15            else{//when nums1 > nums2
16                nums1[p3] = nums2[p2];
17                p3--;
18                p2--;
19            }
20        }
21    }
22};