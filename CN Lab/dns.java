/*
 * Implementation of DNS
 */

import java.net.InetAddress;
import java.util.*;

/**
 * dns
 */
public class dns {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("1. DNS 2. Reverse DNS 3. Exit");
        while (true) {
            System.out.println();
            System.out.print("Enter your choice : ");
            int n = sc.nextInt();
            if (n == 1) {
                System.out.print("Enter Host Name : ");
                String host = sc.next();
                try {
                    InetAddress ip = InetAddress.getByName(host);
                    System.out.println("Host Name : " + host);
                    System.out.println("IP : " + ip.getHostAddress());
                } catch (Exception e) {
                    System.out.println("Host not found");
                }
            } else if (n == 2) {
                System.out.print("Enter IP address : ");
                String ip = sc.next();
                try {
                    InetAddress[] host = InetAddress.getAllByName(ip);
                    System.out.println("IP : " + ip);
                    System.out.println("Host Name : " + host[0].getHostName());
                } catch (Exception e) {
                    System.out.println("Host not found");
                }
            } else {
                System.out.println("Exited");
                break;
            }
        }
        sc.close();
    }

}

/*
 * Menu:
 * 1. DNS 2. Reverse DNS 3. Exit
 * Enter your choice
 * 1
 * Enter Host Name
 * www.google.com
 * 
 * Host Name: www.google.com
 * IP: 209.85.145.106
 * 
 * Menu:
 * 1. DNS 2. Reverse DNS 3. Exit
 * Enter your choice
 * 2
 * Enter IP address
 * 209.85.145.106
 * IP: 209.85.145.106
 * Host Name: jd-in-f106.1e100.net
 * Menu:
 * 1. DNS 2. Reverse DNS 3. Exit
 * 
 * Enter your choice
 * 3
 * 
 */