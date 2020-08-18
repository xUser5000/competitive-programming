import java.util.HashSet;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        HashSet<Integer> set = new HashSet<>();
        int x = scanner.nextInt();
        for (int i = 0; i < x; i++) set.add(scanner.nextInt());
        int y = scanner.nextInt();
        for (int i = 0; i < y; i++) set.add(scanner.nextInt());

        if (n - set.size() == 0) System.out.println("I become the guy.");
        else System.out.println("Oh, my keyboard!");

    }
}
