#include <algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;

        int n = s.size();
        vector<int>hash(256,-1);
        int maxlen = 0;

        while(right < n){
            if(hash[s[right]] != -1){
                //means the character does exist in the hash
                if(hash[s[right]] >= left){
                    //duplicate char found
                    left = hash[s[right]] + 1;
                }
            }
            maxlen = max(maxlen, right - left + 1);
            hash[s[right]] = right;
            right++;
        }

        return maxlen;
    }
};