# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def nihaha(self, head):
        if(head.next):
            return 1 + self.nihaha(head.next)
        else:
            return 1
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if(head.next==None):
            return 
        
        n = self.nihaha(head) - n
        
        nn = 0
        #print(n)
        
        res = head
        slow = head
        while(head and nn<=n):
            #print("slow " ,slow.val)
            if(nn==n):
                if(head.next):
                    head.val = head.next.val
                    if(head.next.next):
                        head.next = head.next.next
                    else:
                        head.next = None
                else:
                    slow.next = None
            nn+=1
            slow = head
            head = head.next
            
        return res

    
            
        
        
        