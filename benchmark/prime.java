import java.util.Scanner;

public class prime
{
    public static int count_prime(int n)
    {
        int count = 0;
        boolean table[] = new boolean[n];

        table[0] = table[1] = false;

        for (int i = 2; i < n; i++) {
            table[i] = true;
        }

        for (int i = 2; i < n; i++) {
            if (table[i]) {
                count++;
                for (int j = i * 2; j < n; j += i) {
                    table[j] = false;
                }
            }
        }

        return count;
    }

    public static void main (String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = count_prime(n);
        System.out.println(count);
    }
}
