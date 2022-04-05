class Solution {
public:
    string longestPalindrome(string s) {
       int n= s.length();
        bool table[n+1][n+1];
        memset(table, 0, sizeof(table));
        int start =0;
        int longest = 1;
        
        for(int i = 0; i <n-1; i++){
            table[i][i] = true;
            if(s[i] == s[i+1]){
                table[i][i+1] = true;
                start = i;
                longest = 2;
            }
        }
        table[n-1][n-1] = true;
        
        for(int k=3; k<=n; k++){
            for(int i=0; i<= n-k; i++){
                int j = i+k -1;
                if(table[i+1][j-1] && s[i] == s[j]){
                    table[i][j] = true;
                    if(k > longest){
                        start = i;
                        longest = k;
                    }
                }
            }
        }
        
        return s.substr(start, longest);
    }
};