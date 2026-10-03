class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(char c:s){
            freq1[c]++;
        }
        for(char ch:t){
            freq2[ch]++;
        }
        for(int i='a';i<'z';i++){
            if(freq1[i]!=freq2[i]){
                return false;
            }
        }
        return true;
    }
};
