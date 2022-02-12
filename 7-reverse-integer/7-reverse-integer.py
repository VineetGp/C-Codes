class Solution:
    def reverse(self, x: int) -> int:
        if x>=0:
            res = int(str(x)[::-1])
        if x<0:
            res = -1*int(str(x*-1)[::-1])
        min_res = -2**31
        max_res = 2**31-1
        if res not in range(min_res, max_res+1):
            return 0
        else:
            return res
        