class Solution {
public:
    int minimumCost(vector<int>& cost) {
       sort(cost.rbegin(),cost.rend());
       int n=cost.size();
       int i;
       int sum=0;
       for(i=0;i<n;i++){
        if((i+1)%3!=0){
            sum+=cost[i];
        }
       }
       return sum;
        
    }
};