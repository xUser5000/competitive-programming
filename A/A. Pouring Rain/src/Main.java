import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        double d = scanner.nextInt();
        double h = scanner.nextInt();
        double v = scanner.nextInt();
        double e = scanner.nextInt();

        double area = (d / 2) * (d / 2) * Math.PI;
        if (e * area > v) System.out.println("NO");
        else System.out.println("YES\n" + area * h / (v - e * area));

    }
}
