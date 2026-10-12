class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        mp={}
        ans=[]
        n=len(nums)
        for x in nums:
            mp[x]=mp.get(x,0)+1
        for x,c in mp.items():
            if c> n//3 :ans.append(x)
        return ans

