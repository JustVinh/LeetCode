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
            //if not duplicated
            if(mark[s[i]] == -1){
                res++;
                //note the first appear position
                mark[s[i]] = i;
            }
            //if found duplicated
            else{
                //update the longest
                longest = max(longest, res);
                
                //find the length of reuseable substring ex. "abcvnbx" then we can use "cvnb"                 when b is duplicated
                res = i - mark[s[i]];
                //reset mark of character that not has been used yet in new substring
                for(int j =0; j <= mark[s[i]]; j++){
                	if(mark[s[j]] < mark[s[i]]){ // remove this line = wrong
                		mark[s[j]] = -1;
                	}
                }
                mark[s[i]] = i;
            }
        }
        
        return max(longest, res);
    }
};