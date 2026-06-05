class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     int n=nums.size();
     unordered_map<int,int>mt;
      int i;
    int sum=0;
     int c=0;
     for(i=0;i<n;i++){
        sum+=nums[i];
       if(sum==k) c++;
       int val=sum-k;
       if(mt.find(val)!=mt.end()){
        c+=mt[val];
       }
       mt[sum]++;
     } 
     return c;       
    }
};