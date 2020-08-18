import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int y = scanner.nextInt();
        int x = scanner.nextInt();
        String [][] p = new String[y][x];
        for (int i = 0; i < y; i++) for (int j = 0; j < x; j++) p[i][j] = scanner.next();

        ArrayList<String> colors = new ArrayList<>(Arrays.asList("C", "M", "Y"));

        boolean colored = false;
        for (int i = 0; i < y; i++) for (int j = 0; j < x; j++) if (colors.contains(p[i][j])) {
            colored = true;
            break;
        }

        if (colored) System.out.println("#Color");
        else System.out.println("#Black&White");

    }
}
