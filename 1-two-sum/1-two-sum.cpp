class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> res;
        for(int i =0; i< nums.size(); i++){
            int candidate = target - nums[i];
            auto found = m.find(candidate);
            if(found != m.end()) return vector<int>{found->second, i};
            
            m[nums[i]] = i;
        }
        
        return res;
    }
};