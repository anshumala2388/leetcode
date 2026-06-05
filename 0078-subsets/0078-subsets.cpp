class Solution {
public:
    void findsubsets(vector<int>& nums,vector<int>& ans,vector<vector<int>>&result,int i) {
        if(i==nums.size()){
            result.push_back({ans});
           return ;
        }
        ans.push_back(nums[i]);
        findsubsets(nums,ans,result,i+1);
        ans.pop_back();
        findsubsets(nums,ans,result,i+1);

    }

    
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> allsubsets;
        vector<int>ans;
        findsubsets(nums,ans,allsubsets,0);
        return allsubsets;
        

        
    }
};