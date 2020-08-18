import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<String> goals = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            goals.add(scanner.next());
        }

        String a = goals.get(0);
        String b = null;
        int ac = 1, bc = 0;

        for (int i = 1; i < n; i++) {
            if (a.equals(goals.get(i))) {
                ac++;
                continue;
            }

            if (b == null) b = goals.get(i);
            bc++;
        }

        System.out.println(ac > bc ? a : b);

    }
}
