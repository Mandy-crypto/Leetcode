class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        n=len(nums)
        sum=[0]*n
        sum[0]=nums[0]
        for i in range (1,n):
            sum[i]=sum[i-1]+nums[i]
        return sum