import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        List<String> arr = new ArrayList<>();
        boolean f = false;
        for (int i = 0; i < n; i++) {
            String s = scanner.next();
            if (f) {
                arr.add(s);
                continue;
            }
            if (s.charAt(0) == 'O' && s.charAt(1) == 'O') {
                f = true;
                arr.add("++" + s.substring(2));
            } else if (s.charAt(3) == 'O' && s.charAt(4) == 'O') {
                f = true;
                arr.add(s.substring(0, 3) + "++");
            } else arr.add(s);
        }

        if (!f) {
            System.out.println("NO");
            return;
        }

        System.out.println("YES");
        for (String element: arr) System.out.println(element);
    }
}
