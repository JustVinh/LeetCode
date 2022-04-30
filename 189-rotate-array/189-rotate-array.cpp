class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> res(n) ;
        
        for(int i =0; i<n; i++){
            if(i-k<0){
                int right_index = i-k+n;
                while(right_index<0){
                    right_index += n;
                }
                res[i] =  nums[right_index];
            }
            else res[i] =  nums[i - k];
        }
        
        for(int i =0; i<n; i++){
            nums[i] = res[i];
        }
    }
};