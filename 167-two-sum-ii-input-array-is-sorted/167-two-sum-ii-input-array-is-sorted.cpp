class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l =0;
        int r = n- 1;
        // int found = 0;
        
        for(int i =0; i<n; i++){
            if(numbers[l] + numbers[r] < target){
                l++;
            }
            else if (numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                break;
            }
        }
        
        return vector<int> {l+1,r+1};
    }
};