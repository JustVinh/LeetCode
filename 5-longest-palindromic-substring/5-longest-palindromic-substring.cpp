class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int table[n+1][n+1];
        memset(table, 0, sizeof(table));
        
        int start =0;
        int longest =1;
        
        for(int i=0; i<n; i++){
            table[i][i] = 1;
        }
        
        for(int i=0; i<n-1;i++){
            if(s[i] == s[i+1]) 
            {
                table[i][i+1] = 1;
                start =i;
                longest = 2;
            }
        }
        
        for(int k =3; k<=n; k++){
            for(int i = 0; i<= n-k; i++){
                int j = i + k -1;
                if(s[i] == s[j] && table[i+1][j-1] == 1){
                    table[i][j] = 1;
                    
                    if( k > longest){
                        longest = k;
                        start = i;
                    }
                }
            }
        }
        
        return s.substr(start, longest);
    }
};