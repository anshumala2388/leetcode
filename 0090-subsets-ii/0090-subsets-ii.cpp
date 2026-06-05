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
        int index=i+1;
        while(index<nums.size() && nums[index]==nums[index-1]){
            index++;
        }
        findsubsets(nums,ans,result,index);

    }

    
    vector<vector<int>> subsetsWithDup(vector<int>& nums)  {
        sort(nums.begin(),nums.end());
         vector<vector<int>> allsubsets;
        vector<int>ans;
        findsubsets(nums,ans,allsubsets,0);
        return allsubsets;
        
    }
};