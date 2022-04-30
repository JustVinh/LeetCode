class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       queue<int> q;
        int n = nums.size();
        for(int i =n-1; i>=0; i--){
            q.push(nums[i]);
        }
        
        for(int i =0; i<k; i++){
            int val = q.front();
            q.pop();
            q.push(val);
        }
        
        for(int i =n-1; i>=0; i--){
            nums[i] = q.front();
            q.pop();
        }
    }
};