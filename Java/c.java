import java.util.Scanner;

public class c {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        if (a.indexOf(':') != -1) {
            System.out.println(b.replaceAll("#", ":"));
            System.out.println(a.replaceAll(":", "#"));
        }
        else {
            System.out.println(b.replaceAll(":", "#"));
            System.out.println(a.replaceAll("#", ":"));
        }
        sc.close();
    }
}
