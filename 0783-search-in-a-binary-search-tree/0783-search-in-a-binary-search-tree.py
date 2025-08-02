# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def dodo(root, val)->Optional[TreeNode]:
    if not(root):
        return
    if root.val == val:
        return root
    
    return dodo(root.left, val) or dodo(root.right, val)

class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        return dodo(root, val)
        