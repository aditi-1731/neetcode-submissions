class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>freq;
        int j=0,maxLen=0;
        for(int i=0;i<s.length();i++){
            if(freq.find(s[i])!=freq.end() && freq[s[i]]>=j){
                j=freq[s[i]]+1;
            }
            freq[s[i]]=i;
            maxLen=max(maxLen,i-j+1);
        }
        return maxLen;;
    }
};
