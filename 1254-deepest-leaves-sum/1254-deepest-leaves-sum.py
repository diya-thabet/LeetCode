# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
def dodo(root, s, niv, n) -> int:
    if not(root):
        return 0
    if not(root.right) and not(root.left) and niv==n:
        s+= root.val
        return s
    else:
        return dodo(root.left, s,niv,n+1) + dodo(root.right, s, niv, n+1)

def nivniv(root):
    if not(root):
        return 0
    return max(1+ nivniv(root.left), 1+ nivniv(root.right))

class Solution:
    def deepestLeavesSum(self, root: Optional[TreeNode]) -> int:
        niv = nivniv(root)
        print(niv)
        res = dodo(root, 0, niv, 1)
        return res

        