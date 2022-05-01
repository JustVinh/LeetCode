class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //snowball technique
        
        int n = nums.size();
        
        int mostLeftZero = 0;
        
        for(int i =0; i< n; i++){
            if(nums[i]!=0){
                swap(nums[i],nums[mostLeftZero]);
                mostLeftZero++;
            }
        }
    }
};