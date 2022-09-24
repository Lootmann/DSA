#
# @lc app=leetcode id=1290 lang=python3
#
# [1290] Convert Binary Number in a Linked List to Integer
import sys

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# @lc code=start
class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        string = ""

        while head:
            string += str(head.val)
            head = head.next

        return int(string, 2)


# @lc code=end
