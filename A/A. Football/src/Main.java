import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        if (s.contains("0000000") || s.contains("1111111")) System.out.println("YES");
        else System.out.println("NO");
    }
}
