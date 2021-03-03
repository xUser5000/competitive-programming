import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long k = scanner.nextLong();
        long n = scanner.nextLong();
        long w = scanner.nextLong();

        long dollars = (k + k*w) * w / 2;
        System.out.println(Math.max(0, dollars - n));
    }
}
