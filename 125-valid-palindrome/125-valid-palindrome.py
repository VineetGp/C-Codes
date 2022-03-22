class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        s1 = ''.join(c for c in s if c.isalnum())
        return s1==s1[::-1]