#
# @lc app=leetcode id=821 lang=python3
#
# [821] Shortest Distance to a Character
#
from typing import List

# @lc code=start
class Solution:
    def shortestToChar(self, s: str, c: str) -> List[int]:
        res = []

        for ch in s:
            if ch == c:
                res.append(0)
            else:
                res.append(100000)

        for i in range(len(s)):
            # found lowerst position
            if res[i] == 0 and i != 0:
                # calc pos left side from its current pos
                current_score = 1
                for j in range(i - 1, -1, -1):
                    if res[j] == 0 or res[j] < current_score:
                        break
                    res[j] = current_score
                    current_score += 1

            if res[i] == 0 and i != len(s) - 1:
                current_score = 1
                for j in range(i + 1, len(s)):
                    if res[j] == 0 or res[j] < current_score:
                        break
                    res[j] = current_score
                    current_score += 1

        return res


# @lc code=end
