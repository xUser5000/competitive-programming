import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int f = -1;
        String ans = "1";
        for (int i = 0; i < n; i++) {
            String x = scanner.next();
            if (x == "0") {
                f = 0;
                ans = "0";
            }
        }
    }
}
