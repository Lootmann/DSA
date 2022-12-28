#
# @lc app=leetcode id=1768 lang=python3
#
# [1768] Merge Strings Alternately
#

# @lc code=start
class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = []
        size = min(len(word1), len(word2))

        for i in range(size):
            res.append(word1[i])
            res.append(word2[i])

        print(word1)
        print(word2)

        if len(word1) > len(word2):
            res.append(word1[size:])
        elif len(word1) < len(word2):
            res.append(word2[size:])

        return "".join(res)


# @lc code=end
