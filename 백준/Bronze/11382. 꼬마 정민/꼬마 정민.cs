using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] str = Console.ReadLine().Split();
            Console.WriteLine(long.Parse(str[0]) + long.Parse(str[1]) + long.Parse(str[2]));
        }
    }
}