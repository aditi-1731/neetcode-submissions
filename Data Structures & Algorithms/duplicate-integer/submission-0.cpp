class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        for(const auto& p:freq){
            if(p.second>1){
                return true;
            }
        }
        return false;
    }
};