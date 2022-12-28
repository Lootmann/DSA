#
# @lc app=leetcode id=1189 lang=python3
#
# [1189] Maximum Number of Balloons
#
from collections import defaultdict

# @lc code=start
class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        d = defaultdict(int)

        for ch in text:
            d[ch] += 1

        ans = 10**4

        for ch in "balloon":
            if ch in ("l", "o"):
                ans = min(ans, d[ch] // 2)
            else:
                ans = min(ans, d[ch])

        print(ans)

        return ans


# @lc code=end
