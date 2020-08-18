import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();

        List<Integer> arr = new ArrayList<>(Arrays.asList(2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47));

        if (m % 2 == 0 || !arr.contains(m)) {
            System.out.println("NO");
            return;
        }

        int dif = arr.indexOf(m) - arr.indexOf(n);
        System.out.println(dif == 1 ? "YES" : "NO");

    }
}
