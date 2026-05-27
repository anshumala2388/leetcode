class Solution {
public:
    bool isvowel(char ch){
        if(tolower(ch)=='a'||tolower(ch)=='e'||tolower(ch)=='i'||tolower(ch)=='o'||tolower(ch)=='u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int  st=0;
        int end=s.length();
        while(st<end){
            if(!isvowel(s[st])){
            st++;
            continue;
            }
            if(!isvowel(s[end])){
                end--;
                continue;
            }
            swap(s[st],s[end]);
            st++;
            end--;
            } 
            return s;
    }
};