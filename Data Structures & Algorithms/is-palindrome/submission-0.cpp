class Solution {
public:
    bool isPalindrome(string s) {
     string st="";
     for(char i:s){
        if(isalnum(i)){
            st+=tolower(i);
        }
     }   
     
     int i=0,j=st.size()-1;
     while(i<j){
        if(st[i]==st[j]){
            i++;
            j--;
        }
        else return false;
     }
     return true;
    }
};
