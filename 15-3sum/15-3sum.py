class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        
        n = len(nums)
        
        for leftest in range(n - 2):
            if leftest > 0 and nums[leftest-1]==nums[leftest]:
                continue
            mid = leftest+1
            right = n-1
            
            while mid < right:
                curr_sum = nums[leftest]+nums[mid]+nums[right]
                
                if curr_sum < 0:
                    mid += 1
                elif curr_sum > 0:
                    right -= 1
                else:
                    res.append([nums[leftest], nums[mid], nums[right]])
                    
                    while mid < right and nums[mid] == nums[mid+1]:
                        mid += 1
                    while mid < right and nums[right] == nums[right-1]:
                        right -= 1
                
                    right -= 1
                    mid += 1
        
        return res