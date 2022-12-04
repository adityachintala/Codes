/**
 * b
 */
import java.util.*;
public class b {

    public static int dfs(int arr[][], int i, int j) {
        if (i < 0 || i >= arr.length || j < 0 || j >= arr[0].length || arr[i][j] == 0) {
            return 0;
        }
        int t = arr[i][j];
        arr[i][j] = 0;
        int u = dfs(arr, i - 1, j);
        int d = dfs(arr, i + 1, j);
        int l = dfs(arr, i, j - 1);
        int r = dfs(arr, i, j + 1);
        return t + Math.max(Math.max(u, d), Math.max(l, r));
    }

    public static int getMaximumGold(int[][] grid) {
        // Implement your logic here.
        int ans = 0;
        for (int i = 0; i < grid.length; i++) {
            for (int j = 0; j < grid[0].length; j++) {
                if (grid[i][j] != 0) {
                    System.out.println("i : " + i + "   j : " + j);
                    int arr[][] = new int[grid.length][grid[0].length];
                    System.arraycopy(grid, 0, arr, 0, arr.length);
                    ans = Math.max(ans, dfs(arr, i, j));
                }
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        int arr_copy[] = new int[arr.length];
        System.arraycopy(arr, 0, arr_copy, 0, arr.length);
        for (int i = 0; i < arr_copy.length; i++) {
            System.out.print(arr_copy[i] + " ");
            arr_copy[i] = 0;
        }
        System.out.println("\n" + Arrays.toString(arr));

    }
}