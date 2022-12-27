#
# @lc app=leetcode id=917 lang=python3
#
# [917] Reverse Only Letters
#

# @lc code=start
class Solution:
    def filter_alpha(self, s: str) -> list:
        res = []
        for ch in s:
            if ch.islower() or ch.isupper():
                res.append(ch)
        return res

    def reverseOnlyLetters(self, s: str) -> str:
        rev_str = self.filter_alpha(s[::-1])

        ans = []
        for ch in s:
            if ch.islower() or ch.isupper():
                ans.append(rev_str.pop(0))
            else:
                ans.append(ch)

        return "".join(ans)


# @lc code=end
