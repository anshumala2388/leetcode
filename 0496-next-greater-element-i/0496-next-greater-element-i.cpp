class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int m=nums1.size();
        vector<int>ans;
        stack<int>s;
        unordered_map<int,int>mt;
        int i;
        for(i=n-1;i>=0;i--){
            while(s.size()>0&&nums2[i]>=s.top()){
                s.pop();
            }
            if(s.empty()){
                mt[nums2[i]]=-1;
            }
            else{
                mt[nums2[i]]=s.top();
            }
            s.push(nums2[i]);
        }
        for(i=0;i<m;i++){
            ans.push_back(mt[nums1[i]]);
        }
        return ans;
        
    }
};