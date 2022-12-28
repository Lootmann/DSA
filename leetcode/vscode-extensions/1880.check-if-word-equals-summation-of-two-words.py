#
# @lc app=leetcode id=1880 lang=python3
#
# [1880] Check if Word Equals Summation of Two Words
#

# @lc code=start
class Solution:
    def ch2num(self, ch: str) -> int:
        return ord(ch) - ord("a")

    def convert(self, s: str) -> int:
        s_num = ""
        for ch in s:
            s_num += str(self.ch2num(ch))
        return int(s_num)

    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:
        f_num = self.convert(firstWord)
        s_num = self.convert(secondWord)
        t_num = self.convert(targetWord)

        return f_num + s_num == t_num


# @lc code=end
