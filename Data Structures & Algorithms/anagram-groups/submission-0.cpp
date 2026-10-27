class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp;
        for(const string& s:strs){
            string sortedS=s;
            sort(sortedS.begin(),sortedS.end());
            mpp[sortedS].push_back(s);
        }
        vector<vector<string>>result;
        result.reserve(mpp.size());
        for(auto& pair:mpp){
            result.push_back(move(pair.second));
        }
        return result;
    }
};
