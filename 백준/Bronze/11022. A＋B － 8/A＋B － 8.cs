using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int T = int.Parse(Console.ReadLine());
            for (int i = 1; i <= T; ++i) {
                string[] str = Console.ReadLine().Split();
                int a = int.Parse(str[0]);
                int b = int.Parse(str[1]);
                Console.WriteLine("Case #{0}: {1} + {2} = {3}", i, a, b, a + b);
            }
        }
    }
}