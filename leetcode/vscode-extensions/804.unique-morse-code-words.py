#
# @lc app=leetcode id=804 lang=python3
#
# [804] Unique Morse Code Words
#
from typing import List

# @lc code=start
class Solution:
    def morse(self, idx: int) -> str:
        return [
            ".-",
            "-...",
            "-.-.",
            "-..",
            ".",
            "..-.",
            "--.",
            "....",
            "..",
            ".---",
            "-.-",
            ".-..",
            "--",
            "-.",
            "---",
            ".--.",
            "--.-",
            ".-.",
            "...",
            "-",
            "..-",
            "...-",
            ".--",
            "-..-",
            "-.--",
            "--..",
        ][idx]

    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        st = set()

        for word in words:
            word2morse = "".join([self.morse(ord(ch) - ord("a")) for ch in word])
            st.add(word2morse)

        print(st)

        return len(st)


# @lc code=end
