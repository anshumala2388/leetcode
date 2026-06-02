class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans;
        unordered_set<int>st;
        int actsum=0,expsum=0;
        int i,j;
        int a,b;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                actsum+=grid[i][j];
                if(st.find(grid[i][j])!=st.end()){
                   a=grid[i][j]; 
                   ans.push_back(a);
                }
                st.insert(grid[i][j]);

            }
        }
        expsum=(n*n)*((n*n)+1)/2;
        b=expsum-(actsum-a);
        ans.push_back(b);
        return ans;

        
    }
};