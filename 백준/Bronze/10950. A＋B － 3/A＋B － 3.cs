using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int T = int.Parse(Console.ReadLine());
            int i = 0;
            
            while (true) {
                if (i > T - 1)
                    break;
                string[] str = Console.ReadLine().Split();
                int A = int.Parse(str[0]);
                int B = int.Parse(str[1]);
                Console.WriteLine("{0}", A + B);
                ++i;
            }
        }
    }
}