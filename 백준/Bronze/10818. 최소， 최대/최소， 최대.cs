using System;

class Program {
    static void Main(string[] args) {
        int N = int.Parse(Console.ReadLine());
        string[] str = Console.ReadLine().Split();
        int min = int.Parse(str[0]), max = int.Parse(str[0]);
        for (int i = 0; i < N; ++i) {
            if (int.Parse(str[i]) < min)
                min = int.Parse(str[i]);
            if (int.Parse(str[i]) > max)
                max = int.Parse(str[i]);
        }
        Console.WriteLine("{0} {1}", min, max);
    }
}
