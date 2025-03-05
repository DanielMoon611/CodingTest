using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int N = int.Parse(Console.ReadLine());
            string[] str = Console.ReadLine().Split();
            int v = int.Parse(Console.ReadLine());
            int count = 0;
            for (int i = 0; i < N; ++i)
                if (v == int.Parse(str[i]))
                    count++;
            Console.WriteLine(count);
        }
    }
}