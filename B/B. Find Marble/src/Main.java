import java.util.Arrays;
import java.util.Scanner;

public class Main {

    static final int MAX = (int) 1e5 + 5;
    static int n, s, t;
    static int[] child = new int[MAX];
    static int[] depth = new int[MAX];

    static void dfs (int node, int cnt) {
        depth[node] = cnt;
        if (depth[ child[node] ] == -1) dfs(child[node], cnt+1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        s = scanner.nextInt(); s--;
        t = scanner.nextInt(); t--;
        for (int i = 0; i < n; i++) {
            int a = scanner.nextInt();
            a--;
            child[i] = a;
        }
        Arrays.fill(depth, -1);
        dfs(s, 0);

        System.out.println(depth[t]);
    }
}
