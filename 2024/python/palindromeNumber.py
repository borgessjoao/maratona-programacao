class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        original = x
        new = 0

        while x > 0:
            new = new * 10 + x % 10
            x //= 10
        if original == new:
            return True
        else:
            return False
        