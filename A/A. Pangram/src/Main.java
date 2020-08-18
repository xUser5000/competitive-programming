import java.util.HashSet;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        String word = scanner.next().toLowerCase();
        HashSet<Character> temp = new HashSet<>();

        for (int i = 0; i < n; i++) {
            temp.add(word.charAt(i));
        }

        if (temp.size() == 26) System.out.println("YES");
        else System.out.println("NO");

    }
}
