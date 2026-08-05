class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        int v=s.size();
        for(int i=v-1;i>=0;i--){
            if(s[i]==' ' && c > 0){
               break;
            }
            else if(s[i]!=' '){
                c++;
            }
        }return c;
    }
};