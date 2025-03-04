using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            while (true) {
                string[] str = Console.ReadLine().Split();
                int a = int.Parse(str[0]);
                int b = int.Parse(str[1]);
                if(a == 0 && b == 0)
                    break;
                Console.WriteLine("{0}", a + b);
            }
        }
    }
}