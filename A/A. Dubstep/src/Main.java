import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String [] song = scanner.next().split("WUB");
        for (String s : song) {
            System.out.print(" " + s);
        }

    }
}