#
# @lc app=leetcode id=1859 lang=python3
#
# [1859] Sorting the Sentence
#

# @lc code=start
class Solution:
    def sortSentence(self, s: str) -> str:
        d = {}
        splitted = s.split(" ")

        for word in splitted:
            d[word[-1]] = word[:-1]

        res = []

        for i in range(1, len(splitted) + 1):
            res.append(d[str(i)])

        return " ".join(res)


# @lc code=end
