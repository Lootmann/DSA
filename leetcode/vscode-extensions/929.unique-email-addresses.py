#
# @lc app=leetcode id=929 lang=python3
#
# [929] Unique Email Addresses
#
from typing import List

# @lc code=start
class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        parsing = set()

        for email in emails:
            local, domain = email.split("@")
            local = local.split("+")[0].replace(".", "")
            parsing.add(f"{local}@{domain}")

        return len(parsing)


# @lc code=end
