import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.nextLine();
        Map<Character, Integer> map = new HashMap<>();
        for (int i = 0; i < a.length(); i++) {
            char ch = a.charAt(i);
            if (ch == ' ') continue;
            if (map.containsKey(ch)) map.put(ch, map.get(ch)+1);
            else map.put(ch, 1);
        }
        String b = scanner.nextLine();

        for (int i = 0; i < b.length(); i++) {
            char ch = b.charAt(i);

            if (ch == ' ') continue;

            if (!map.containsKey(ch) || map.get(ch) == 0) {
                System.out.println("NO");
                return;
            } else map.put(ch, map.get(ch) - 1);
        }
        System.out.println("YES");
    }
}
