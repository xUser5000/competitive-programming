import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int t = scanner.nextInt();

        if (t != 10) {

            System.out.print(t);
            for (int i = 0; i < n - 1; i++) System.out.print("0");

        } else {
            if (n == 1) System.out.println(-1);
            else {
                System.out.print(t);
                for (int i = 0; i < n - 2; i++) System.out.print(0);
            }
        }

    }
}
