class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        
        for(int i = 0; i<nums.size(); i++){
            int budd = target - nums[i];
            auto buddIter = m.find(budd);
            if(buddIter != m.end()){
                return vector<int>{buddIter->second, i};
            }
            
            m[nums[i]] = i;
        }
        return vector<int>{0,0};
    }
};