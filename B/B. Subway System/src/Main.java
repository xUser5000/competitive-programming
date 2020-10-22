import java.util.*;

public class Main {

    static HashMap<String, Vector<String>> graph;
    static HashSet<String> vis = new HashSet<>();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        graph = new HashMap<>();
        for (int i = 0; i < n; i++) {
            String line = scanner.nextLine();
            String[] arr = line.split(" ");
            String prev = arr[0];
            for (int j = 1; j < arr.length; j++) {
                if (graph.containsKey(arr[j])) {
                    Vector<String> vcc = graph.get(arr[j]);
                    vcc.add(arr[j-1]);
                    graph.put(arr[j], vcc);
                } else graph.put(arr[j], new Vector<>(Collections.singleton(arr[j-1])));
            }
        }
    }
}
