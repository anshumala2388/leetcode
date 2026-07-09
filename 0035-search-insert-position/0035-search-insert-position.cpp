class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int mid=i+(j-i)%2;
            if(target==nums[mid]){
                return mid;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        if(target<nums[0]) return 0;
        else if(target>nums[nums.size()-1]) return nums.size();
        else {
            for(i=0;i<nums.size();i++){
                if(target<nums[i]){
                    return i;
                }
            }
        }
        return -1;
    }
};