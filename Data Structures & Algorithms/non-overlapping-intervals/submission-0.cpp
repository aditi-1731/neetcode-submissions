class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if(n<=1){
            return 0;
        }
        sort(intervals.begin(),intervals.end(),[](vector<int>& a,vector<int>& b){
            return a[1]<b[1];
        });
        int clean =0;
        int prev = intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<prev){
                clean++;
            }
            else{
                prev=intervals[i][1];
            }
        }
        return clean;
    }
};
