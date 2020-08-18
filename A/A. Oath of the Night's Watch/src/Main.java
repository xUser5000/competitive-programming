import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int arr [] = new int [n];
        int ma = 0, mi = 0;
        int c = 0;
        for (int i = 0; i  <n; i++) {
            int number = scanner.nextInt();
            arr[i] = number;
            if (c != 0) mi = Math.min(mi, arr[i]);
            else { mi = arr[i]; c++; }
            ma = Math.max(ma, arr[i]);
        }

        int solution = 0;
        for (int i = 0; i < n; i++) {

            if (arr[i] > mi && arr[i] < ma) solution++;

        }

        System.out.println(solution);

    }
}
