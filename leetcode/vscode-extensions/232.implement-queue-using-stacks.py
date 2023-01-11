#
# @lc app=leetcode id=232 lang=python3
#
# [232] Implement Queue using Stacks
#

# @lc code=start
class MyQueue:
    def __init__(self):
        self.st1 = []
        self.st2 = []

    def fill(self):
        while len(self.st1) != 0:
            self.st2.append(self.st1.pop())

    def push(self, x: int) -> None:
        self.st1.append(x)

    def pop(self) -> int:
        if len(self.st2) != 0:
            return self.st2.pop()

        self.fill()
        return self.st2.pop()

    def peek(self) -> int:
        if len(self.st2) != 0:
            return self.st2[-1]

        self.fill()
        return self.st2[-1]

    def empty(self) -> bool:
        return len(self.st1) == 0 and len(self.st2) == 0


# @lc code=end
