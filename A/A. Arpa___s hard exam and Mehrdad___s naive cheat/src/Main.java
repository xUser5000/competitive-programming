import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        long n = scanner.nextLong();

        if (n == 0) System.out.println(1);
        else if (n % 4 == 1) System.out.println(8);
        else if (n % 4 == 2) System.out.println(4);
        else if (n % 4 == 3) System.out.println(2);
        else if (n % 4 == 0) System.out.println(6);

    }
}