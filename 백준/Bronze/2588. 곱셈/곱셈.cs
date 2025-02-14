using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int a = int.Parse(Console.ReadLine());
            int b = int.Parse(Console.ReadLine());
            Console.WriteLine(((b % 100) % 10) * a);
            Console.WriteLine(((b % 100) / 10) * a);
            Console.WriteLine((b / 100) * a);
            Console.WriteLine(((b % 100) % 10) * a + (((b % 100) / 10) * a * 10) + ((b / 100) * a * 100));
        }
    }
}