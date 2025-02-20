using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int N = int.Parse(Console.ReadLine());
            for (int i = 1; i < 10; ++i) {
                Console.WriteLine("{0} * {1} = {2}", N, i, N * i);
            }
        }
    }
}