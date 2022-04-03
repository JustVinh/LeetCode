class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //mark[i] the first appear position of character i 
        int mark[130];
        memset(mark, -1, sizeof(mark));
        if(s == "") return 0;
        int res = 0;
        int longest  =1;
        
        for(int i=0; i< s.length(); i++){
            if(mark[s[i]] == -1){
                res++;
                mark[s[i]] = i;
            }
            else{
                longest = max(longest, res);
                res = i - mark[s[i]];
                for(int j =0; j <= mark[s[i]]; j++){
                	if(mark[s[j]] < mark[s[i]]){
                		mark[s[j]] = -1;
                	}
                }
                mark[s[i]] = i;
            }
        }
        
        return max(longest, res);
    }
};