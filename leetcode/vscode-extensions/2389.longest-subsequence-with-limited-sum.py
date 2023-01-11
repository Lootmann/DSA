#
# @lc app=leetcode id=2389 lang=python3
#
# [2389] Longest Subsequence With Limited Sum
#
from typing import List

# @lc code=start
class Solution:
    def answerQueries(self, nums: List[int], queries: List[int]) -> List[int]:
        ans = []
        nums.sort()

        for q in queries:
            s, l = 0, 0

            for num in nums:
                if s + num <= q:
                    s += num
                    l += 1
                else:
                    bjreak

            ans.append(l)

        return ans


# @lc code=end
