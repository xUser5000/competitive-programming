import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int c = 0;
        for (int i = 0; i < n; i++) {
            String num = scanner.next();
            boolean [] check = new boolean[k + 1];
            for (int j = 0; j < check.length; j++) check[j] = false;
            for (int j = 0; j < num.length(); j++) {
                int a = Integer.parseInt(String.valueOf(num.charAt(j)));
                if (a <= k) check[a] = true;
            }

            boolean x = true;
            for (int j = 0; j < check.length; j++) {
                if (!check[j]) {
                    x = false;
                    break;
                }
            }

            if (x) c++;
        }

        System.out.println(c);
    }
}
