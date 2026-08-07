class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>ans;
       for(auto i:nums){
        ans[i]++;
       } 
       vector<pair<int,int>>sol;
       for(auto x:ans){
        sol.push_back({x.second,x.first});
       }
       sort(sol.begin(),sol.end(),greater<pair<int,int>>());
       vector<int>final;
       for(int i = 0; i < k; i++){
        final.push_back(sol[i].second);
       }
       return final;
    }
};
