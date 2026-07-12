class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m + n - 2; //total number of possible paths
        int R = min(m-1,n-1); //since both give same answer, we prefer shorter iternations

        double ans = 1;

        for(int i = 0; i < R; i++){
            ans = ans*(N-i);
            ans = ans/(i+1); 
        }

        return int(ans);
    }
};