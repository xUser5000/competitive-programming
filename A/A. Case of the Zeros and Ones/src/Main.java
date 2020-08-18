import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String str = scanner.next();
        int a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            if (str.charAt(i) == '1') a++;
            else b++;
        }

        System.out.println(Math.abs(a - b));
    }
}
