import java.util.Scanner;
import java.util.TreeSet;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int [] arr = new int [n];
        for (int i = 0; i < n; i++) {
            int num = scanner.nextInt();
            arr[i] = num;
        }

        TreeSet<Integer> heap = new TreeSet<>();
        int state = n;

        for (int i = 0; i < n; i++) {
            if (state == arr[i]) {

                System.out.print(arr[i]);
                state--;

                while (state > 0 && heap.contains(state)) {
                    System.out.print(" " + state);
                    heap.remove(state);
                    state--;
                }

                System.out.print("\n");

            } else {
                heap.add(arr[i]);
                System.out.print("\n");
            }
        }

    }
}
