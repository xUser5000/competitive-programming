import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            if (map.containsKey(num)) map.put(num, map.get(num) + 1);
            else map.put(num, 1);
        }

        int lg = 0;
        Collection<Integer> arr = map.keySet();
        for (Integer i: arr) {
            if (map.get(i) > lg) lg = map.get(i);
        }

        if (n % 2 == 0) {
            if (lg > n / 2) System.out.println("NO");
            else System.out.println("YES");
        } else {
            if (lg > (n / 2) + 1) System.out.println("NO");
            else System.out.println("YES");
        }

    }
}
