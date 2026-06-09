class Solution {
public:
   set<vector<int>> s;
    void cs(vector<int>& arr, int target,int i,vector<int>& combine,vector<vector<int>>& ans){
        if(target<0 || i==arr.size() ){
            return ;
        }
        if(target==0){
            if(s.find(combine) ==s.end()){
            ans.push_back(combine);
            s.insert(combine);
            
            }
            return;
        }
        combine.push_back(arr[i]);
        cs(arr,target-arr[i],i+1,combine,ans);
        cs(arr,target-arr[i],i,combine,ans);
        combine.pop_back();
        cs(arr,target,i+1,combine,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> combine;
        vector<vector<int>> ans;
        cs(candidates,target,0,combine,ans);
        return ans;
    }
};