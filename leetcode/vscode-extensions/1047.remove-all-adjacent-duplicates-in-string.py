#
# @lc app=leetcode id=1047 lang=python3
#
# [1047] Remove All Adjacent Duplicates In String
#

# @lc code=start
class Solution:
    def removeDuplicates(self, s: str) -> str:
        res = []

        for ch in s:
            if res and res[-1] == ch:
                res.pop()
            else:
                res.append(ch)

        return "".join(res)


# @lc code=end
