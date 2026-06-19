
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int temp[n+1];
        int k=0;
        int max1=0;
        int i,sum=0;
                temp[k++]=0;
        for(i=1;i<=n;i++){
            
            sum=sum+gain[i-1];
            temp[k++]=sum;
            max1=max(temp[i],max1);
        }
        return max1;

    }
};