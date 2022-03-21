class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        first_occurence = False
        for char in s[::-1]:
            if char!=' ':
                count = count +1
                first_occurence = True
            if first_occurence and char==' ':
                return count
        return count