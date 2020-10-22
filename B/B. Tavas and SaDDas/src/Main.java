import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        StringBuilder s = new StringBuilder(scanner.next());
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '4') s.setCharAt(i, '0');
            else s.setCharAt(i, '1');
        }
        int ans = Integer.parseInt(s.toString(), 2) + 1;
        for (int i = 1; i <= n-1; i++) {
            ans += Math.pow(2, i);
        }
        System.out.println(ans);
    }
}
