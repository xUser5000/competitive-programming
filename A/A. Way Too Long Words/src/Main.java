import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        ArrayList<String> words = new ArrayList<>();
        ArrayList<String> solution = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            String word = scanner.next();
            words.add(word);
        }

        for (String word: words) {

            if (word.length() <= 10) {
                solution.add(word);
                continue;
            }

            String newStr = "" + word.charAt(0);
            newStr += word.length() - 2;
            newStr += word.charAt(word.length() - 1);

            solution.add(newStr);

        }

        for (String word: solution) System.out.println(word);

    }
}
