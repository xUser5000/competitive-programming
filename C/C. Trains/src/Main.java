import java.util.Scanner;

public class Main {

    static long gcd (long a, long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    static long lcm (long a, long b) {
        return (a*b) / gcd(a, b);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();

        long x = 0;
        long l = 0, r = 0;
        long c = lcm(a, b);
        while (x != c) {
            long first = ( x/a + 1 ) * a;
            long second = ( x/b + 1 ) * b;
            if (first < second) {
                l += first - x;
                x = first;
            } else if (second < first) {
                r += second - x;
                x = second;
            } else {
                if (a > b) {
                    l += first - x;
                    x = first;
                } else {
                    r += second - x;
                    x = second;
                }
            }
        }

        if (l > r) System.out.println("Dasha");
        else if (l < r) System.out.println("Masha");
        else System.out.println("Equal");
    }
}
