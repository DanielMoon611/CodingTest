using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int X = int.Parse(Console.ReadLine());
            int N = int.Parse(Console.ReadLine());
            int answer = 0;
            for (int i = 0; i < N; ++i) {
                string[] str = Console.ReadLine().Split();
                int a = int.Parse(str[0]);
                int b = int.Parse(str[1]);
                answer += a * b;
            }
            Console.WriteLine(answer == X ? "Yes" : "No");
        }
    }
}