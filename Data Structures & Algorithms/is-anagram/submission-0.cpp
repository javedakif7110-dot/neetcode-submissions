class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int>a,b;
        for(auto x:s){
            a[x]++;
        }
        for(auto x:t){
            b[x]++;
        }
        for(auto i:a){
            if(a[i.first]==b[i.first]){
                continue;
            }
            return false;
        }
        return true;
    }
};
