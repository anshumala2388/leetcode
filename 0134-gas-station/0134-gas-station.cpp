#include<numeric>
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumcg=accumulate(cost.begin(),cost.end(),0);
        int sumg=accumulate(gas.begin(),gas.end(),0);
        if(sumg<sumcg){
            return -1;
        }
    
            int start=0,i,cg=0;
            for( i=0;i<gas.size();i++){
                cg+=gas[i]-cost[i];
                if(cg<0){
                    start=i+1;
                    cg=0;
                }
            }
        
        return start;
    }
};