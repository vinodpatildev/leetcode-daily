// Problem Link : https://leetcode.com/problems/flip-string-to-monotone-increasing/description/

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flips=0,ones=0;
        for(char ch : s){
            if(ch == '0') flips++;
            else ones++;
            flips = min(flips,ones);
        }
        return flips;
    }
};