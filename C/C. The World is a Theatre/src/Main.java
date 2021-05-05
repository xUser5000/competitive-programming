import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static BigInteger[] fact = new BigInteger[35];

    static BigInteger C (int n, int r) {
        return fact[n].divide(fact[r]).divide(fact[n-r]);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        fact[0] = BigInteger.ONE;
        for (int i = 1; i <= 30; i++) fact[i] = fact[i-1].multiply(BigInteger.valueOf(i));
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int t = scanner.nextInt();
        BigInteger ans = BigInteger.ZERO;
        for (int i = 4; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (i + j != t) continue;
                ans = ans.add( C(n, i).multiply( C(m, j) ) );
            }
        }
        System.out.println(ans);
    }
}