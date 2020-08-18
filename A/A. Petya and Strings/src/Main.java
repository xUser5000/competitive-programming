import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        String a = in.nextLine();
        String b = in.nextLine();

        a = a.toLowerCase();
        b = b.toLowerCase();

        int n = a.compareTo(b);


        if (n > 0) System.out.println(1);
        else if (n < 0) System.out.println(-1);
        else System.out.println(0);

    }
}
