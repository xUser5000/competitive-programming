import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();
        String sol = "";

        for (int i = 0; i < s.length(); i++) {
            int n = Integer.parseInt(String.valueOf(s.charAt(i)));

            if (n == 9) {
                if (i == 0) sol += "9";
                else sol += 0;
            }
            else if (n <= 4) sol += n;
            else sol += 9 - n;
        }

        System.out.println(sol);

    }
}
