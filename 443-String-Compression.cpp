class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int write = 0;

        while(i < n){
            int j = i;
            while(j < n && chars[j] == chars[i]) j++;
            int runLen = j-i;

            chars[write] = chars[i];
            write++;

            if(runLen > 1){
                string strnum = to_string(runLen);
                for(char c: strnum){
                    chars[write] = c;
                    write++;
                }
            }

            i = j;
        }

        return write;
    }    
};