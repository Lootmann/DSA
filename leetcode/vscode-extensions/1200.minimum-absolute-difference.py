#
# @lc app=leetcode id=1200 lang=python3
#
# [1200] Minimum Absolute Difference
#
from typing import List
from collections import defaultdict

# @lc code=start
class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        dist = defaultdict(list)
        arr.sort()

        min_diff = 10**6 * 2 + 1
        for i in range(len(arr) - 1):
            diff = abs(arr[i] - arr[i + 1])
            if min_diff >= diff:
                dist[diff].append([arr[i], arr[i + 1]])
                min_diff = min(min_diff, diff)

        return sorted(dist[min_diff])


# @lc code=end
