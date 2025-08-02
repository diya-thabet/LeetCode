# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def dfs(root, l):
        if root:
            l.append(root.val)
            if(root.right):
                dfs(root.right, l)
            if(root.left):
                dfs(root.left, l)
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
       l=[]
       dfs(root, l)
       return l[::-1]
            
