class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l =0;
        int r = n- 1;
        // int found = 0;
        while(l<r){
            if(numbers[l] + numbers[r] < target){
                l++;
            }
            else if (numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                return {l+1, r+1};
            }
        }
        
        
        return {};
    }
};