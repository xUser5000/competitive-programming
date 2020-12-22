import java.util.Scanner;

public class Main {

    static boolean check (long n) {
        char[] s = String.valueOf(n).toCharArray();
        for (char ch: s) {
            int a = ch - '0';
            if (a == 0) continue;
            if (n % a != 0) return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int k = 0; k < t; k++) {
            long n = scanner.nextLong();
            while (true) {
                if (check(n)) {
                    System.out.println(n);
                    break;
                }
                n++;
            }
        }
    }
}
