import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();

        StringBuilder rev = new StringBuilder();
        for (int i = a.length() - 1; i >= 0; i--) {
            rev.append(a.charAt(i));
        }

        if (b.contentEquals(rev)) System.out.println("YES");
        else System.out.println("NO");

    }
}
