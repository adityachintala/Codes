// Program: Go Back ARQ

import java.util.*;

public class gobackarq_2b {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("please enter the window size: ");
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            System.out.println("frame " + i + " has been transmitted");
        }
        System.out.print("please enter the last acknowledgement received: ");
        int ack = sc.nextInt();
        for (int i = ack; i < ack + n; i++) {
            System.out.println("frame " + i + " has been transmitted");
        }
        sc.close();
    }
}

// please enter the window size: 2
// frame 0 has been transmitted
// frame 1 has been transmitted
// please enter the last acknowledgement received: 8
// frame 8 has been transmitted
// frame 9 has been transmitted