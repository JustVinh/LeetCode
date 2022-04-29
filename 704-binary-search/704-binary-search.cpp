class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int L = 0;
        int R = n - 1;
        int res = -1;
        while(R-L > 1){
            int mid = (L+R)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                R = mid-1;
            }
            else L = mid+1;
        }
        
        //need to check edges too
        if(nums[L] == target) return L;
        if(nums[R] == target) return R;

        
        return res;
    }
};