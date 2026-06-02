class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>ans;
        int sr=0,er=m-1,sc=0,ec=n-1;
        int i;
        while(sr<=er && sc<=ec){
            for(i=sc;i<=ec;i++){
                ans.push_back(matrix[sr][i]);
            }
            for(i=sr+1;i<=er;i++){
                ans.push_back(matrix[i][ec]);
            }
             if (sr < er) {
            for(i=ec-1;i>sc;i--){
                ans.push_back(matrix[er][i]);
            }
             }
             if (sc < ec){
            for(i=er;i>sr;i--){
                ans.push_back(matrix[i][sc]);
            }}
            sr++;
            er--;
            sc++;
            ec--;
        }
        return ans;
         }
};