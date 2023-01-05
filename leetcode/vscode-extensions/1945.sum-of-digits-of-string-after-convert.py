#
# @lc app=leetcode id=1945 lang=python3
#
# [1945] Sum of Digits of String After Convert
#

# @lc code=start
class Solution:
    def convert(self, s: str) -> int:
        total = ""
        for ch in s:
            total += str(ord(ch) - ord("a") + 1)
        return total

    def transform(self, s: str) -> int:
        total = 0
        for ch in s:
            total += int(ch)
        return total

    def getLucky(self, s: str, k: int) -> int:
        ans = 0
        converted = self.convert(s)

        for _ in range(k):
            ans = self.transform(converted)
            converted = str(ans)

        return ans


# @lc code=end
