#
# @lc app=leetcode id=1323 lang=python3
#
# [1323] Maximum 69 Number
#

# @lc code=start
class Solution:
    def maximum69Number(self, num: int) -> int:
        res = ""
        is_changed = False

        for ch in str(num):
            if is_changed:
                res += ch
            else:

                if ch == "9":
                    res += ch

                if ch == "6":
                    res += "9"
                    is_changed = True

        return int(res)


# @lc code=end
