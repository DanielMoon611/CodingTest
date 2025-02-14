using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] numStr = Console.ReadLine().Split();
            int a = int.Parse(numStr[0]);
            int b = int.Parse(numStr[1]);
            int c = int.Parse(numStr[2]);
            Console.WriteLine((a + b) % c);
            Console.WriteLine(((a % c) + (b % c)) % c);
            Console.WriteLine((a * b) % c);
            Console.WriteLine(((a % c) * (b % c)) % c);
        }
    }
}