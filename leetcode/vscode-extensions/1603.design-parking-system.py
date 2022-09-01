#
# @lc app=leetcode id=1603 lang=python3
#
# [1603] Design Parking System
#

# @lc code=start
class ParkingSystem:
    def __init__(self, big: int, medium: int, small: int):
        self.big = big
        self.medium = medium
        self.small = small

    def addCar(self, carType: int) -> bool:
        is_available = False

        if carType == 1:
            if self.big > 0:
                is_available = True
            self.big -= 1

        elif carType == 2:
            if self.medium > 0:
                is_available = True
            self.medium -= 1

        elif carType == 3:
            if self.small > 0:
                is_available = True
            self.small -= 1

        return is_available


# @lc code=end
