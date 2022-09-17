#
# @lc app=leetcode id=2325 lang=python3
#
# [2325] Decode the Message
#
from string import ascii_lowercase


# @lc code=start
class Solution:
    def create_table_key(self, key: str) -> list:
        res = []
        s = set()

        for ch in key.replace(" ", ""):
            if ch not in s:
                s.add(ch)
                res.append(ch)

        return res

    def decodeMessage(self, key: str, message: str) -> str:
        table_key = self.create_table_key(key)

        d = {}
        for tk, ch in zip(table_key, ascii_lowercase):
            d[tk] = ch

        res = []

        for ch in message:
            if ch.isalpha():
                res.append(d[ch])
            else:
                res.append(ch)

        return "".join(res)


# @lc code=end
