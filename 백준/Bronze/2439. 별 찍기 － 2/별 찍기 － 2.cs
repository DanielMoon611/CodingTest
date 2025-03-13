using System;

class Program {
    static void Main(string[] args) {
        int N = int.Parse(Console.ReadLine());
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                if (i + j >= N - 1)
                    Console.Write("*");
                else
                    Console.Write(" ");
            }
            Console.WriteLine();
        }
    }
}