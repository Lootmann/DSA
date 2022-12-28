#
# @lc app=leetcode id=1370 lang=python3
#
# [1370] Increasing Decreasing String
#
# @lc code=start
class Solution:
    def sortString(self, s: str) -> str:
        alpha = [0] * 26

        for ch in s:
            alpha[ord(ch) - ord("a")] += 1

        res = []
        count = sum(alpha)

        while count != 0:
            # step 1, 2, 3
            for i in range(26):
                if alpha[i] > 0:
                    res.append(chr(ord("a") + i))
                    alpha[i] -= 1
                    count -= 1

            # step 4, 5, 6
            for i in range(25, -1, -1):
                if alpha[i] > 0:
                    res.append(chr(ord("a") + i))
                    alpha[i] -= 1
                    count -= 1

        return "".join(res)


# @lc code=end
