#include<climits>
class Solution {
public:
    bool isvalid(vector<int>& nums, int k,int mid){
        int p=1,maxsum=0,i;
        for(i=0;i<nums.size();i++){
            if(maxsum + nums[i]<=mid){
                maxsum+=nums[i];
            }
            else{
                p++;
                maxsum=nums[i];
            }
        }
        return  p<=k;
    
    }
    int splitArray(vector<int>& nums, int k) {
        int i,sum=0,minval=INT_MIN;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            minval=max(minval,nums[i]);
        }
        int ans=-1;
        int st=minval;
        int end=sum;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isvalid(nums,k,mid)){
               ans=mid;
               end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    }
};