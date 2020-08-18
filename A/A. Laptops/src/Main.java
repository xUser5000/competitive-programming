import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Pair [] arr = new Pair[n];
        for (int i = 0; i < n; i++) {
            arr[i] = new Pair(scanner.nextInt(), scanner.nextInt());
        }

        Arrays.sort(arr);

        for (int i = 1; i < n; i++) {
            if (arr[i - 1].quality > arr[i].quality) {
                System.out.println("Happy Alex");
                return;
            }
        }

        System.out.println("Poor Alex");
    }

    static class Pair implements Comparable<Pair> {
        public int price = 0, quality = 0;

        public Pair(int price, int quality) {
            this.price = price;
            this.quality = quality;
        }

        @Override
        public int compareTo(Pair o) {
            return Integer.compare(this.price, o.price);
        }
    }
}
