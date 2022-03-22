class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s1 = ''.join(c for c in s if c.isalnum())
        l = 0
        h = len(s1)-1
        while(l<h):
            if s1[l]!=s1[h]:
                return False
            else:
                l+=1
                h-=1
        return True