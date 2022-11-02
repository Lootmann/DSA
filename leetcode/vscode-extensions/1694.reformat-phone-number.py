#
# @lc app=leetcode id=1694 lang=python3
#
# [1694] Reformat Phone Number
#

# @lc code=start
class Solution:
    def reformatNumber(self, number: str) -> str:
        def split(number: str) -> tuple[str, str]:
            if len(number) == 2:
                return ("", number[0:2])

            if len(number) == 3 or len(number) > 4:
                return (number[3:], number[0:3])

            if len(number) == 4:
                return (number[4:], "-".join([number[0:2], number[2:4]]))

            raise ValueError("hoge")

        number = number.replace(" ", "").replace("-", "")

        res = []

        while True:
            number, s = split(number)
            res.append(s)

            if number == "":
                break

        return "-".join(res)


# @lc code=end
