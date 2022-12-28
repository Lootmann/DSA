#
# @lc app=leetcode id=1446 lang=python3
#
# [1446] Consecutive Characters
#

# @lc code=start
class Solution:
    def maxPower(self, s: str) -> int:
        ans = 1

        for i in range(len(s) - 1):
            cnt = 1
            for j in range(i + 1, len(s)):
                if s[i] == s[j]:
                    cnt += 1
                else:
                    break
            ans = max(ans, cnt)

        return ans


# @lc code=end
