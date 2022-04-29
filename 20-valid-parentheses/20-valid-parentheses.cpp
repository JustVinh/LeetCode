class Solution {
public:
    bool isValid(string s) {
        bool res = false;
        int n = s.length();
        stack<char> st;
        for(int i =0; i<n; i++){
            char candi = NULL;
            if(!st.empty()) candi = st.top();
            if((candi == '(' && s[i]==')') || (candi == '{' && s[i]=='}') || (candi == '[' && s[i]==']')){
            st.pop();
        }
            else{
                st.push(s[i]);
            }
        }
        
        if(st.empty()) res = true;
        return res;
    }
};