/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    private List<List<string>> ans = new List<List<string>>();
    public IList<IList<string>> PrintTree(TreeNode root) {
        FillVerticalBlanks(root, 1);
        int rows = ans.Count;
        int columns = Math.Pow(2, rows) - 1;
        for(int i=0;i<rows;i++){
            for(int j=0;j<colums;j++){
                ans[i].Add("");
            }
        }
        int mid = colums/2;
        Traverse(0, 0, rows, offset, root);
    }
    private void Traverse(int level, int i, int j, TreeNode root){
        if(root == null){
            return;
        }
        int mid = (i + j) / 2;
        ans[level][mid] = root.val.ToString();
        Traverse(level + 1, i, mid, root.left);
        Traverse(level + 1, mid + 1, root.right);
    }
    private void FillVerticalBlanks(TreeNode root, int level){
        if(root == null){
            return;
        }
        if(level > ans.size()){
            ans.Add(new List<string>());
        }
        if(root.left != null){
            FillVerticalBlanks(root.left, level + 1);
        }
        if(root.right != null){
            FillVerticalBlanks(root.right, level + 1);
        } 
    }
}