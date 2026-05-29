
class Solution {
public:
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int i;
        for(i=0;i<n;i++){
            int sum=0;
            int x=nums[i];
            while(x>0){
                sum+=(x%10);
                x=x/10;
            }
            nums[i]=sum;
        }
        int min1=nums[0];
        for(i=0;i<n;i++){
            min1=min(min1,nums[i]);
        }
        return min1;
    }
};