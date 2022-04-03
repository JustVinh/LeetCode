class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mark(130, -1);
        
        int res = 0;
        int start = -1;
        for(int i=0; i< s.length(); i++){
            //count from start to the duplicated position
            if(mark[s[i]] > start ){
                start = mark[s[i]];
            }
                res = max(res, i - start);
                mark[s[i]] = i;
            
        }
        
        return res;
    }
};