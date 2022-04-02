class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        set<int> s(nums.begin(), nums.end());
        int no_num = nums.size();
        unordered_map<int, int> m;

      for(int i = 0; i < nums.size(); i++) {
        // Check if we have seen our buddy
        int buddy = target - nums[i];
        auto buddyIt = m.find(buddy);

        if(buddyIt != m.end()) {
          // Buddy found, return answer
          return vector<int>{ buddyIt->second, i };
        }

        // Buddy not found, insert current num into buddy map
        m[nums[i]] = i;
      }
        return res;
    }
};