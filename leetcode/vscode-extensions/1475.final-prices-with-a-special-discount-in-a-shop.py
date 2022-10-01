#
# @lc app=leetcode id=1475 lang=python3
#
# [1475] Final Prices With a Special Discount in a Shop
#
from typing import List

# @lc code=start
class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        res = []

        for i in range(len(prices) - 1):
            current = prices[i]
            for j in range(i + 1, len(prices)):
                is_discount = False

                if prices[i] >= prices[j]:
                    current -= prices[j]
                    res.append(current)
                    is_discount = True

                if is_discount:
                    break

            if len(res) != i + 1:
                res.append(current)

        res.append(prices[-1])

        return res


# @lc code=end
