// Problem Link : https://leetcode.com/problems/insert-interval/

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        for(int i=0; i<intervals.size(); i++){
            if(intervals[i][1]<newInterval[0]) res.push_back(intervals[i]);
            else if(intervals[i][0]>newInterval[1]) res.push_back(intervals[i]);
            else if(intervals[i][1]>=newInterval[0]) newInterval[0] = min(intervals[i][0],newInterval[0]), newInterval[1] = max(intervals[i][1],newInterval[1]);
            else if(intervals[i][0]<=newInterval[1]) newInterval[1] =min(intervals[i][0],newInterval[0]), newInterval[1] = max(intervals[i][1],newInterval[1]);
        }
        res.push_back(newInterval);
        sort(res.begin(),res.end());
        return res;        
    }
};