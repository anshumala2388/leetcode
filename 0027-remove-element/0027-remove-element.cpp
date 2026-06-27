class Solution{
    public:
      int removeElement(vector<int>&nums,int val){
        int n=nums.size();
        int c,i=0;
        for(c=0;c<n;c++){
            if(nums[c]!=val){
                nums[i]=nums[c];
                i++;
            }
           
        }
        return i;
      }
};
    