class Solution {
public:
    int helpsearch(vector<int>& nums, int target,int s,int e){
        if(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){ return mid;}
        else if(nums[mid]>=target){ return helpsearch(nums,target,s,mid-1);}
        else {return helpsearch(nums,target,mid+1,e);}
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        return helpsearch(nums,target,i,j);
        
    }
};