class Solution {
  public:
    string encode(string &s) {
        // code here
        int n = s.size();
        string ans;
        int count = 1;
        
        for(int i = 0; i < n; i++){
            if(i == n-1){
                ans.append(s[i] + to_string(count));
                break;
            }
            if(s[i] == s[i+1]){
                count++;
                continue;
            }
            else{
                //when different char
                ans.append(s[i] + to_string(count));
                count = 1;
            }
        }
        
        return ans;
    }
};