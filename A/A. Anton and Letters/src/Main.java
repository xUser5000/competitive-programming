import java.util.HashSet;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        String letters = scanner.nextLine();

        HashSet<Character> set = new HashSet<>();

        for (int i = 1; i < letters.length() - 1; i += 3) set.add(letters.charAt(i));

        System.out.println(set.size());

    }
}
