class Solution {
public:

    vector<int>Genrow(int row){
        vector<int>list;
        list.push_back(1);
        int ans = 1;
        for(int i = 1; i < row; i++){
            ans = ans * (row - i);
            ans = ans/i;
            list.push_back(ans);
        }

        return list;

    }

    vector<vector<int>> generate(int N) {
        vector<vector<int>>ans;
        for(int i = 1; i <= N; i++){
            ans.push_back(Genrow(i));
        }

        return ans;
    }
};