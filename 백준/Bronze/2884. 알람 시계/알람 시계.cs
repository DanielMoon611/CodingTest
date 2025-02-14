using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] str = Console.ReadLine().Split();
            int h = int.Parse(str[0]);
            int m = int.Parse(str[1]);
            if(m >= 45)
                m -= 45;
            else {
                if(h == 0)
                    h = h - 1 + 24;
                else
                    h -= 1;
                m = m - 45 + 60;
            }
            Console.WriteLine("{0} {1}", h, m);
        }
    }
}