class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mark[130];
        memset(mark, -1, sizeof(mark));
        
        int n = s.length();
        int start = -1;
        int longest = 0;
        
        for(int i=0; i< n; i++){
            if(mark[s[i]] > start){
                start = mark[s[i]];
            }
            longest = max(longest, i - start);
            mark[s[i]] = i;
            
            
        }
        
        return longest;
    }
};