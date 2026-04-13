# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
"""
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        
        n1 = 0
        e = l1
        potencia = 1

        while e is not None:
            n1 += e.val * potencia
            potencia *= 10
            e = e.next

        n2 = 0
        e = l2
        potencia = 1

        while e is not None:
            n2 += e.val * potencia
            potencia *= 10
            e = e.next

        n3 = n1 + n2

        dummy = ListNode(0)
        current = dummy

        while n3 > 0:
            digit = n3 % 10
            current.next = ListNode(digit)
            current = current.next
            n3 //= 10

        if dummy.next is None:
         dummy.next = ListNode(0)

        return dummy.next

       """