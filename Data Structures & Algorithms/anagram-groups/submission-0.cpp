class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>ans;
        for(auto i:strs){
            string s=i;
            sort(s.begin(),s.end());
            ans[s].push_back(i);
        }
        vector<vector<string>>sol;
        for(auto x:ans){
            sol.push_back(x.second);
        }
        return sol;
    }
};