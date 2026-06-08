class Solution {
public:
    bool issafe(vector<string> &borad,int row, int col,int n){
        int i;
        for(i=0;i<row;i++){
            if(borad[i][col]=='Q'){
                return false;
            }
        }
        for(i=0;i<col;i++){
            if(borad[row][i]=='Q'){
                return false;
            }
        }
        int j;
        for(i=row,j=col;i>=0&&j>=0;i--,j--){
            if(borad[i][j]=='Q'){
                return false;
            }
        }
        for(i=row,j=col;i>=0&&j<n;i--,j++){
            if(borad[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
    void nqueen(vector<string>&borad,int row,int n,vector<vector<string>>&ans){
        if(row==n){
            ans.push_back({borad});
            return;
        }
        int i;
        for(i=0;i<n;i++){
            if(issafe(borad,row,i,n)){
              borad[row][i]='Q';
              nqueen(borad,row+1,n,ans);
              borad[row][i]='.';
           }

        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> borad(n,string(n,'.'));    
        vector<vector<string>> s;
   
        nqueen(borad,0,n,s);
        return s;
        
    }
};