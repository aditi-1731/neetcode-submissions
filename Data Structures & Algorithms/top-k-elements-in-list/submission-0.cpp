class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair<int,int>>ans;
        for(const auto& p :freq){
            ans.push_back({p.second,p.first});
        }
        sort(ans.rbegin(),ans.rend());
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(ans[i].second);
        }
        return result;
    }
};
