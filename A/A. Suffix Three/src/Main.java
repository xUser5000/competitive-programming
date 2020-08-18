import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for (int i = 0; i < n; i++) {
            String a = scanner.next();
            if (a.endsWith("po")) System.out.println("FILIPINO");
            else if (a.endsWith("desu") || a.endsWith("masu")) System.out.println("JAPANESE");
            else System.out.println("KOREAN");
        }
    }
}
