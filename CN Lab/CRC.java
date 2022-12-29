// Code to perform cyclic redundancy check(CRC) on a given message
import java.util.*;

/*
enter number of data bits : 8
enter data : 1 0 1 1 1 0 1 1 
enter size of generator : 5
enter generator : 1 1 0 0 1
the generator matrix : 101110110000       
the crc is : 0011
transmitter code for crc is : 101110110011
 */

public class CRC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter number of data bits : ");
        int n = sc.nextInt();
        System.out.print("enter data : ");
        int arr[] = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        System.out.print("enter size of generator : ");
        int m = sc.nextInt();
        System.out.print("enter generator : ");
        int gen[] = new int[m];
        for(int i = 0; i < m; i++)
            gen[i] = sc.nextInt();
        sc.close();
        int gen_mat[] = new int[n + m - 1];
        for(int i = 0; i < n; i++)
            gen_mat[i] = arr[i];
        System.out.println("the generator matrix : " + Arrays.toString(gen_mat));
        int rem[] = new int[m - 1];
        for (int i = 0; i < n; i++) {
            if (gen_mat[i] == 1) {
                for (int j = 0; j < m; j++) {
                    gen_mat[i + j] = gen_mat[i + j] ^ gen[j];
                }
            }
        }
        for (int i = 0; i < m - 1; i++) {
            rem[i] = gen_mat[n + i];
        }
        
        System.out.print("the crc is : ");
        for(int i = 0; i < m - 1; i++)
            System.out.print(rem[i]);
        System.out.println();
        System.out.print("transmitter code for crc is : ");
        for(int i = 0; i < n; i++)
            System.out.print(arr[i]);
        for(int i = 0; i < m - 1; i++)
            System.out.print(rem[i]);
    }    
}
