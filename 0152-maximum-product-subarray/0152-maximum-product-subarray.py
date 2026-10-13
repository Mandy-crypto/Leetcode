class Solution:
    def maxProduct(self, a: list[int]) -> int:
        n=len(a)
        mx=mn=ans=a[0]
        for i in range(1,n):
            if a[i]<0 : mx,mn=mn,mx
            mx=max(a[i],a[i]*mx)
            mn=min(a[i],a[i]*mn)
            ans=max(ans,mx)
        return ans
