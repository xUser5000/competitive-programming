import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        ArrayList<Integer> arrStr = new ArrayList<>();

        for (int i = 0; i < s.length(); i += 2) arrStr.add(Integer.parseInt(String.valueOf(s.charAt(i))));

        Object [] arr = arrStr.toArray();

        for (int i = 0; i < arr.length - 1; i++) {
            if ((Integer) arr[i] > (Integer) arr[i + 1]) {
                Integer temp = (Integer) arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                i = -1;
            }
        }

        System.out.print(arr[0]);
        for (int i = 1; i < arr.length; i++) System.out.print("+" + arr[i]);
    }
}
