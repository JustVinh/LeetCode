class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int found = 0;
        
        int L=0;
        int R=n-1;
        
        int res ;
        while(R-L>1){
            int mid = (L+R)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) R = mid-1;
            else L = mid +1;
        }
        
        if(nums[L] == target){
            res = L;
        }
        else if(nums[R] == target){
            res = R;
        }
        else{
            if(target < nums[L]) res = L;
            else if(target > nums[L] && target < nums[R]) res = L+1;
            else res= R+1;
        };
        
        return res;
    }
};