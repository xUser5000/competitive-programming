import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int number = scanner.nextInt();
            sum += number;
            arr.add(number);
        }

        int val = sum / 2;

        // sort
        Collections.sort(arr);

        int s = 0, counter = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s > val) break;
            else {
                counter++;
                s += arr.get(i);
            }
        }

        System.out.println(counter);

    }
}
