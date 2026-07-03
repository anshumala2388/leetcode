class Solution {
public:
   void solve(vector<vector<int>>&ans,vector<int>&nums,int idx ){
    if(idx==nums.size()){
        ans.push_back({nums});
        return ;
    }
    unordered_set<int>s;
    int i;
    for(i=idx;i<nums.size();i++){
        if(s.count(nums[i])){
            continue;
        }
        s.insert(nums[i]);
        swap(nums[i],nums[idx]);
        solve(ans,nums,idx+1);
        swap(nums[idx],nums[i]);
    }
   }
   
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vector<vector<int>>ans;  
      solve(ans,nums,0);
      return ans;
    }
};