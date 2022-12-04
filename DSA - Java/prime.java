import java.util.Scanner;

class prime {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number to check if prime: ");
        int n = sc.nextInt();
        System.out.println(isPrime(n));
    }
    
    static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i < n / 2 + 1; i++) {
            if (n % i == 0) {
                return true;
            }
        }
        return false;
    }
}