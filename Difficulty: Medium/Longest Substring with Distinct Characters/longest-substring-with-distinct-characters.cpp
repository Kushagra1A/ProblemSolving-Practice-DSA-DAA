class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.size();
        unordered_map<char,int>mp;
        
        int i = 0;
        int j = i;
        int maxcount = 0;
        
        while(j < n){
            if(mp.find(s[j]) == mp.end()){
                //new char
                mp.insert({s[j], j});
                
                maxcount = max(maxcount, j - i + 1);
                j++;
            }
            else{
                //when repeated char
                if(i > mp[s[j]]){
                    mp[s[j]] = j;
                    maxcount = max(maxcount, j - i + 1);
                }
                else{
                    i = mp[s[j]] + 1;
                    mp[s[j]] = j;
                    maxcount = max(maxcount, j - i + 1);
                }
                j++;
            }
        }
        
        return maxcount;
    }
};
