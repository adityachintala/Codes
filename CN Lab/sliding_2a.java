
// Program: Sliding window protocol

import java.util.*;

public class sliding_2a {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("enter window size: ");
        int n = sc.nextInt();
        System.out.print("enter number of frames to transmit: ");
        int f = sc.nextInt();
        int frames[] = new int[f];
        System.out.print("enter " + f + " frames: ");
        for (int i = 0; i < f; i++) {
            frames[i] = sc.nextInt();
        }
        System.out.println("after sending " + n + " frames at each stage");
        System.out.println("sender waits for acknowledgemnt sent by the receiver");
        for (int i = 0; i < f; i++) {
            if (i % n == 0) {
                for (int j = i; j < i + n; j++) {
                    if (j < f) {
                        System.out.print(frames[j] + " ");
                    }
                }
                System.out.println("\nacknowledgement of above frames sent is received by the sender");
            }
        }
        sc.close();
    }
}

// enter window size: 3
// enter number of frames to transmit: 5
// enter 5 frames: 12 5 89 4 6
// after sending 3 frames at each stage
// sender waits for acknowledgemnt sent by the receiver
// 12 5 89
// acknowledgement of above frames sent is received by the sender
// 4 6
// acknowledgement of above frames sent is received by the sender