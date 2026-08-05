class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_map<int,int>ans;
     for(auto i:nums){
        ans[i]++;
     }   
     for(auto x:ans){
        if(x.second>1){
            return true;
        }
     } return false;

    }
};