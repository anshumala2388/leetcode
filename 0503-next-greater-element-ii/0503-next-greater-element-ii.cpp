class Solution {
public:
int p(int i,vector<int>& nums){
    int j;
    for(j=0;j<i;j++){
        if(nums[i]<nums[j]){
            return nums[j];
        }
    }
    return -1;
}
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>r(n,0);
        stack<int>s;
        int i;
         for(i=n-1;i>=0;i--){
            while(!s.empty()&&nums[i]>=s.top()){
                s.pop();
            }
            r[i]=s.empty()?p(i,nums):s.top();
            s.push(nums[i]);
        }
        return r;
        
    }
};