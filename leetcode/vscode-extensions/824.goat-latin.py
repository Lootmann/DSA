#
# @lc app=leetcode id=824 lang=python3
#
# [824] Goat Latin
#

# @lc code=start
class Solution:
    def is_lower(self, ch: str) -> bool:
        return ch in ("a", "e", "i", "o", "u", "A", "E", "I", "O", "U")

    def toGoatLatin(self, sentence: str) -> str:
        splitted = sentence.split(" ")
        res = ["" for _ in range(len(splitted))]

        for idx, word in enumerate(splitted):
            if self.is_lower(word[0]):
                res[idx] += word + "ma" + "a" * (idx + 1)
            else:
                res[idx] += word[1:] + word[0] + "ma" + "a" * (idx + 1)

        return " ".join(res)


# @lc code=end
