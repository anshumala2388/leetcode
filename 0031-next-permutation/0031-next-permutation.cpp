class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot=-1;
        int n=nums.size();
        int i;
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i=n-1;i>pivot;i--){
            if(nums[pivot]<nums[i]){
                swap(nums[pivot],nums[i]);
                break;
            }
        }
        int k=pivot+1;
        int j=n-1;
        while(k<=j){
            swap(nums[k++],nums[j--]);
           
        }
        
    }
};