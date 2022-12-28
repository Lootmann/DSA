#
# @lc app=leetcode id=1507 lang=python3
#
# [1507] Reformat Date
#

# @lc code=start
class Solution:
    def month_to_int(self, month: str) -> int:
        months = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
        return months.index(month) + 1

    def reformatDate(self, date: str) -> str:
        day, month, year = date.split(" ")

        return "{}-{:02d}-{:02d}".format(year, self.month_to_int(month), int(day[:-2]))


# @lc code=end
