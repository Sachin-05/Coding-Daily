class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> mpp(256,-1);
        int len = s.length();
        int left = 0;
        int right = 0;
        int ans = 0;
        
        while(right<len){
            if(mpp[s[right]]!=-1){
                left = max(mpp[s[right]]+1, left);
            }
            
            mpp[s[right]] = right;
            
            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }
};
