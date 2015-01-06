using System;

public class Application
{
    public static int prime(int n)
    {
        int count = 0;
        bool[] table = new bool[n];

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

    public static void Main(string[] cmd)
    {
        string input = Console.ReadLine();
        int n = int.Parse(input);
        int count = prime(n);
        Console.WriteLine(count);
    }
}
