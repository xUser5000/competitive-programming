import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int [] arr = {0, 0, 0};
        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt();
            arr[i % 3] += a;
        }

        int max = Math.max(arr[0], Math.max(arr[1], arr[2]));
        if (arr[0] == max) System.out.println("chest");
        else if (arr[1] == max) System.out.println("biceps");
        else System.out.println("back");
    }
}
