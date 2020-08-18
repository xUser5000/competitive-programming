import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String s = Integer.toBinaryString(n);

        int c = 0;
        for (int i = 0; i < s.length(); i++) if (s.charAt(i) == '1') c++;

        System.out.println(c);
    }
}
