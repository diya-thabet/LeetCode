# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
def dodo(head):
    if not head:
        return 0
    return 1 + dodo(head.next)

def headhead(root, l, x):
    while x!=l:
        root= root.next
        x+=1
    return root
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        l = dodo(head)
        l=(l//2)+1
        return headhead(head, l, 1)
        