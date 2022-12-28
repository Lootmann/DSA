#
# @lc app=leetcode id=999 lang=python3
#
# [999] Available Captures for Rook
#
from typing import List

# @lc code=start
class Solution:
    def find_rook(self, board) -> list:
        rook_row, rook_col = -1, -1

        for row, _ in enumerate(board):
            for col, _ in enumerate(board[0]):
                if board[row][col] == "R":
                    rook_row = row
                    rook_col = col

        return rook_row, rook_col

    def numRookCaptures(self, board: List[List[str]]) -> int:
        count = 0
        row, col = self.find_rook(board)

        # vertical - to top
        for c in range(col - 1, -1, -1):
            if board[row][c] == ".":
                pass
            elif board[row][c] == "p":
                count += 1
                break
            else:
                break

        # vertical - to bottom
        for c in range(col + 1, len(board)):
            if board[row][c] == ".":
                pass
            elif board[row][c] == "p":
                count += 1
                break
            else:
                break

        # horizontal - to left
        for r in range(row - 1, -1, -1):
            if board[r][col] == ".":
                pass
            elif board[r][col] == "p":
                count += 1
                break
            else:
                break

        # horizontal - to right
        for r in range(row + 1, len(board[0])):
            if board[r][col] == ".":
                pass
            elif board[r][col] == "p":
                count += 1
                break
            else:
                break

        return count


# @lc code=end
