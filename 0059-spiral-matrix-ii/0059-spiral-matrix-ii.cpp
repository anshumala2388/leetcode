class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n, 0));
        int sr=0,er=n-1,sc=0,ec=n-1;
        int i;
        int j=1;
        while(sr<=er && sc<=ec){
            for(i=sc;i<=ec;i++){
                 ans[sr][i]=j++;
                 
            }
            for(i=sr+1;i<=er;i++){
                ans[i][ec]=j++;
            }
             if (sr < er) {
            for(i=ec-1;i>sc;i--){
                ans[er][i]=j++;
            }
             }
             if (sc < ec){
            for(i=er;i>sr;i--){
                ans[i][sc]=j++;
            }}
            sr++;
            er--;
            sc++;
            ec--;
        }
        return ans;
        
    }
};