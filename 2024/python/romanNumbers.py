class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        number = 0

        values = {
        'I': 1, 'V': 5, 'X': 10,
        'L': 50, 'C': 100,
        'D': 500, 'M': 1000
        }

        for i in range (len(s)):
            current = s[i]
            
            if i + 1 < len(s):
                nextNum = s[i + 1]
                nextVal = values[nextNum]
            else:
                nextVal = 0
            
            val = values[current]

            if val < nextVal:
                number -= val
            else:
                number += val

        return number

