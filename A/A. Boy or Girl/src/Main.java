import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main (String [] args) {

        Scanner scanner = new Scanner(System.in);

        String str = scanner.next();

        HashSet<Character> set = new HashSet<>();

        for (int i = 0; i < str.length(); i++)
            set.add(str.charAt(i));

        if (set.size() % 2 == 0) System.out.println("CHAT WITH HER!");
        else System.out.println("IGNORE HIM!");

    }
}
