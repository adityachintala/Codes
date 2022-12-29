import java.util.*;

public class dvr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of nodes: ");
        int n = sc.nextInt();
        int[][] dist = new int[n][n];
        System.out.println("Enter the distance matrix : ");
        for (int i = 0; i < dist.length; i++) {
            for (int j = 0; j < dist.length; j++) {
                dist[i][j] = sc.nextInt();
            }
        }
        sc.close();
        System.out.println();

        for (int i = 0; i < dist.length; i++) {
            System.out.println("Router info for router : " + i + 1);
            System.out.println("Dest\tNHop\tDist");
            for (int j = 0; j < dist.length; j++) {
                System.out.println(j + "\t" + j + "\t" + dist[i][j]);
            }
            System.out.println();
        }
    }    
}
/*
 * Enter number of nodes:
3
Enter the distance matrix:
1 0 99
0 2 99
3 2 0

Router info for router: 01
Destination      NextHop         Dist
0               0               1
1               1               0
2               2               99
Router info for router: 11
Destination      NextHop         Dist
0               0               0
1               1               2
2               2               99
Router info for router: 21
Destination      NextHop         Dist
0               0               3
1               1               2
2               2               0


 */