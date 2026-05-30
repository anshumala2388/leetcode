class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i,index=0;
        for(i=0;i<n;){
            int count=0;
            int ch=chars[i];
            while(i<n&&ch==chars[i]){
                count++;i++;
            }
            if(count==1){
                chars[index++]=ch;
            }
            else{
                chars[index++]=ch;
                string str=to_string(count);
                for(char dig:str){
                    chars[index++]=dig;
                }
            }
            
        }
        chars.resize(index);
        return index;
    }
};