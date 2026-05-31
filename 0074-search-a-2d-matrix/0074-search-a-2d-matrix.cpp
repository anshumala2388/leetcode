class Solution {
public:
   bool search(vector<vector<int>>&mat,int mid,int target,int m){
       int s=0;
       int e=m-1;
       while(s<=e){
          int mid1=s+(e-s)/2;
          if(mat[mid][mid1]==target){
            return true;
          }
          else if(mat[mid][mid1]>=target){
            e=mid1-1;
          }
          else{
            s=mid1+1;
          }
       }
       return false;
   }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int n=mat.size();
       int m=mat[0].size();
       int s=0,e=n-1;
       while(s<=e){
        int mid=s+(e-s)/2;
        if(mat[mid][0]<=target && target<=mat[mid][m-1]){
            return search(mat,mid,target,m);
        }
        else if(mat[mid][m-1]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
       }
       return false;
        
    }
};