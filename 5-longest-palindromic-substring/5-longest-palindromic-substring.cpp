class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        // true if from i to j is palindromic 
        bool table[n+1][n+1];
        //Never forget to memset
        memset(table, 0, sizeof(table));
        int longest = 1;
        //track the start postion of longest subs string
        int start = 0;
        
        //length = 1
        for(int i =0; i< n; i++){
            table[i][i] = true;
        }
        
        //length = 2
        for(int i =0; i <n -1; i++){
            if(s[i] == s[i+1]) {
                table[i][i+1] = true;
                longest = 2;
                //each time longest get updated, we update tracking start position too
                start = i;
            }
        }
    
        
        //length >= 3
        for(int k =3; k <= n; k++){
            // i is start index of substring have k length
            for(int i =0; i <= n-k; i++){
                //j is end index of substring have k length
                int j = i + k -1;
                
                if(table[i+1][j-1] && s[i] == s[j]){
                    table[i][j] = true;
                    if(k > longest){
                        longest = k;
                        start = i;
                    }
                }
            }
        }
        
        // printf("Start: %d, Length: %d\n", start, longest);
        
        string res = "";
        for(int i =start; i< start+longest; i++){
            res += s[i];
        }
        
        return res;
    }
};