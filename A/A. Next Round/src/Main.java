import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int arr [] = new int [n];
        for (int i = 0; i < n; i++) arr[i] = scanner.nextInt();

        int solution = 0;

        if (arr[k - 1] != 0) {

            solution = k;

            for (int i = k; i < n; i++) {
                if (arr[i] == arr[i - 1]) solution++;
                else break;
            }

        } else {

            for (int i = 0; i < n; i++) {
                if (arr[i] != 0) solution++;
                else break;
            }

        }

        System.out.println(solution);

    }
}
