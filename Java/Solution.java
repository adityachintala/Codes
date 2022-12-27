import java.util.*;

class Solution {
    public int countCornerRectangles(int[][] grid) {
        int m = grid.length, n = grid[0].length;
        int[][] dp = new int[n][n];
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] != 1)
                    continue;
                for (int k = j + 1; k < n; k++)

                {

                    if (grid[i][k] == 1) {
                        res += dp[j][k];
                        dp[j][k]++;
                    }
                }
            }
        }
        // print array
        System.out.println("\ndp array");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(dp[i][j] + " ");
            }
            System.out.println();
        }
        return res;
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        int grid[][] = new int[m][n];
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                grid[i][j] = sc.nextInt();
        System.out.println(new Solution().countCornerRectangles(grid));
    }
}

/*
3 4
1 0 1 0
1 1 1 1
0 1 1 1
 */