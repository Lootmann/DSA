#
# @lc app=leetcode id=1935 lang=python3
#
# [1935] Maximum Number of Words You Can Type
#

# @lc code=start
class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        count = 0

        for word in text.split(" "):
            can_type = True
            for ch in brokenLetters:
                if ch in word:
                    can_type = False

            if can_type:
                count += 1

        return count


# @lc code=end
