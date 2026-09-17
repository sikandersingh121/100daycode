import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[][] a = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }

        HashSet<Integer> set = new HashSet<>();
        boolean distinct = true;

        for (int i = 0; i < n; i++) {
            if (!set.add(a[i][i])) {
                distinct = false;
                break;
            }
        }

        System.out.println(distinct ? "Distinct" : "Not Distinct");
    }
}
