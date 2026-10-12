class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        st=set(nums)
        ans=0
        for x in st:
            if x-1 not in st:
                y=x
                ln=1
                while y+1 in st:
                    y+=1
                    ln+=1
                ans=max(ans,ln)
        return ans

