class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans = 0
        i = 0
        n = len(nums) 
        while i<=n:
            ans = ans^i
            i+=1

        for i in nums:
            ans = ans^i
        return ans
        