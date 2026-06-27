
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int freq=0,i,max1,ans=-1;
        unordered_map<int,int>mt;
       for(i=0;i<arr.size();i++){
        mt[arr[i]]++;
       }
       for(auto x:mt){
        if(x.second>freq){
             freq=x.second;
             ans=x.first;
        }
       }
       return ans;
    }
};