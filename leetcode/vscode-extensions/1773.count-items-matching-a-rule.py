#
# @lc app=leetcode id=1773 lang=python3
#
# [1773] Count Items Matching a Rule
#
from typing import List

# @lc code=start
class Solution:
    def key_to_idx(self, rule_key: str) -> int:
        if rule_key == "type":
            return 0

        if rule_key == "color":
            return 1

        if rule_key == "name":
            return 2

        return -1

    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        count = 0

        rule_idx = self.key_to_idx(ruleKey)

        for item in items:
            if item[rule_idx] == ruleValue:
                count += 1

        return count


# @lc code=end
