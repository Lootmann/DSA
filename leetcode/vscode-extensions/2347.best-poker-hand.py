#
# @lc app=leetcode id=2347 lang=python3
#
# [2347] Best Poker Hand
#
from typing import List

# @lc code=start
class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits)) == 1:
            return "Flush"

        cards = {}
        for rank in ranks:
            if rank not in cards:
                cards[rank] = 0
            cards[rank] += 1

        for num in cards.values():
            if num >= 3:
                return "Three of a Kind"

        for num in cards.values():
            if num == 2:
                return "Pair"

        return "High Card"


# @lc code=end
