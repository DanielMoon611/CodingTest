using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] str = Console.ReadLine().Split();
            if(int.Parse(str[0]) > int.Parse(str[1]))
                Console.WriteLine(">");
            else if(int.Parse(str[0]) < int.Parse(str[1]))
                Console.WriteLine("<");
            else
                Console.WriteLine("==");
        }
    }
}