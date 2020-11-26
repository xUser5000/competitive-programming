import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != '1' && s.charAt(i) != '4') {
                System.out.println("NO");
                return;
            }
        }

        if (s.charAt(0) == '4') {
            System.out.println("NO");
            return;
        }

        if (s.contains("444")) {
            System.out.println("NO");
            return;
        }

        System.out.println("YES");
    }
}
