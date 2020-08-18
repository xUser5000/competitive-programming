import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String s = scanner.next().toLowerCase();

        List<Character> vowles = new ArrayList<>(Arrays.asList('a', 'e', 'i', 'y', 'o', 'u'));

        for (int i = 0; i < s.length(); i++) {
            if (vowles.contains(s.charAt(i))) continue;
            System.out.print("." + s.charAt(i));
        }

    }
}
