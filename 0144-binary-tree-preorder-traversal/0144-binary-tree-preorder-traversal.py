# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def dfs(root, l):
    if root:
        l.append(root.val)
        dfs(root.left, l)
        dfs(root.right, l)
        
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        l=[]
        dfs(root, l)
        return l
        