# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def dfs(root, l, v):
    if root:
        dfs(root.left, l, v)
        dfs(root.right, l, v)
        
        l.append(root.val)
class Solution:
    def findTarget(self, root: Optional[TreeNode], k: int) -> bool:
        l=[]
        dfs(root, l, k)
        for i in range(len(l)-1):
            for j in range(i+1, len(l)):
                if l[i]+l[j] == k:
                    return True
        return False