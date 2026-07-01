class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>l(n,0);
        vector<int>r(n,0);
        stack<int>s;
        int i;
        int max1=0;
        for(i=n-1;i>=0;i--){
            while(!s.empty()>0&&heights[i]<=heights[s.top()]){
                s.pop();
            }
            r[i]=s.empty()?n:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        for(i=0;i<n;i++){
            while(!s.empty()>0&&heights[i]<=heights[s.top()]){
                s.pop();
            }
            l[i]=s.empty()?-1:s.top();
            s.push(i);
        }
        int area;
        for(i=0;i<n;i++){
             area=heights[i]*(r[i]-l[i]-1);
            max1=max(area,max1);
        }
        return max1;

        
    }
};