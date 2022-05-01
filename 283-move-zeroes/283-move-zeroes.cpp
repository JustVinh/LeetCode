class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        
        int l =0;
        int r = n-1;
        
        for(int i =0; i<n; i++){
            if(nums[i] == 0){
                res[r] = nums[i];
                r--;
            }
            else{
                res[l] = nums[i];
                l++;
            }
        }
        
        for(int i =0; i< n; i++){
            nums[i] = res[i];
        }
    }
};