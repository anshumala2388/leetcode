#include<climits>
class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n=landStartTime.size();
        int m=waterStartTime.size();
        int i,j;
        int min1=INT_MAX;
        for(i=0;i<n;i++){
            int s=landStartTime[i]+landDuration[i];
            for(j=0;j<m;j++){
                int ans=max(s,waterStartTime[j])+waterDuration[j];
                min1=min(min1,ans);
            }
        }
        for(i=0;i<m;i++){
            int s=waterStartTime[i]+waterDuration[i];
            for(j=0;j<n;j++){
                int ans=max(s,landStartTime[j])+landDuration[j];
                min1=min(min1,ans);
            }
        }
        return min1;
        
    }
};