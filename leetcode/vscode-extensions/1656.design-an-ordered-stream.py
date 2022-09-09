#
# @lc app=leetcode id=1656 lang=python3
#
# [1656] Design an Ordered Stream
#
from typing import List

# @lc code=start
class OrderedStream:
    def __init__(self, n: int):
        self.stream = [[] for _ in range(n + 1)]
        self.i = 0

    def insert(self, key: int, value: str) -> List[str]:
        self.stream[key - 1] = value
        res = []

        while self.stream[self.i]:
            res.append(self.stream[self.i])
            self.i += 1

        return res


# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)
# @lc code=end
