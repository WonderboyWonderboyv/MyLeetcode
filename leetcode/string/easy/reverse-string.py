class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        right = 0
        left = len(s)-1
        while right < left:
            s[right], s[left] = s[left], s[right]
            left -= 1
            right += 1