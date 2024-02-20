class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans = 0
        j = 0
        for i in nums:
            ans = ans^i
            ans = ans^j
            j+=1

        return ans^j
        