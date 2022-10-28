#
# @lc app=leetcode id=2062 lang=python3
#
# [2062] Count Vowel Substrings of a String
#

# @lc code=start
class Solution:
    def is_ok(self, ch: str) -> bool:
        return ch.islower() and ch in ("a", "e", "i", "o", "u")

    def countVowelSubstrings(self, word: str) -> int:
        ans = 0
        size = len(word)

        for i in range(size - 1):
            if self.is_ok(word[i]):
                s = {word[i]}
                nxt = i + 1

                while nxt != size and self.is_ok(word[nxt]):
                    s.add(word[nxt])

                    if len(s) >= 5:
                        ans += 1

                    nxt += 1

        return ans


# @lc code=end
