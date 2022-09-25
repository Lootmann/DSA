# src/min_stack.py
from typing import Optional
from src.node import SinglyLinkedNode


class MinNode:
    _next: Optional["SinglyLinkedNode"]

    def __init__(self, val):
        self._val = val
        self._min_val = val
        self._next = None

    @property
    def next(self):
        return self._next

    @next.setter
    def next(self, _next):
        self._next = _next

    @property
    def val(self):
        return self._val

    @property
    def min_val(self):
        return self._min_val

    @min_val.setter
    def min_val(self, _min):
        self._min_val = min(_min, self._min_val)

    def __str__(self) -> str:
        return "(val, min_val) = ({}, {})".format(self.val, self.min_val)


class MinStack:
    _head: Optional["MinNode"]

    def __init__(self):
        self._size = 0
        self._head = None

    def push(self, val):
        """push
        push val

        :param val:
        :return: None
        """
        self._size += 1
        new_node = MinNode(val)

        if self.empty():
            self._head = new_node
        else:
            new_node.min_val = min(self._head.min_val, val)
            new_node.next = self._head
            self._head = new_node

    def pop(self) -> MinNode:
        """
        NOTE: this 'pop' method pops an Node
            but pop Node.val(int, str or something) is also good.

        :return: SinglyLinkedNode, never return None
        """
        if self.empty():
            raise ValueError("stack is empty")

        self._size -= 1
        popped = self._head
        self._head = self._head.next
        return popped

    def empty(self) -> bool:
        return self._head is None

    @property
    def size(self) -> int:
        return self._size

    @property
    def peek(self):
        if self.empty():
            raise ValueError("stack is empty")
        return self._head.val

    @property
    def min_peek(self):
        if self.empty():
            raise ValueError("stack is empty")
        return self._head.min_val

    def __str__(self) -> str:
        return "(val, min_val) = ({}, {})".format(self.peek, self.min_peek)
