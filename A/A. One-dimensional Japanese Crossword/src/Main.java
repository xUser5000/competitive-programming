import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = scanner.next();
        List<Integer> ans = new ArrayList<>();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'B') {
                cnt++;
            } else {
                if (cnt > 0) ans.add(cnt);
                cnt = 0;
            }
        }

        if (cnt > 0) ans.add(cnt);

        System.out.println(ans.size());
        for (int element: ans) System.out.print(element + " ");
    }
}
