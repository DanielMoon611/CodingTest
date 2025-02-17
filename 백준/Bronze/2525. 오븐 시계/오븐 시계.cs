using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] str = Console.ReadLine().Split();
            int H = int.Parse(str[0]);
            int M = int.Parse(str[1]);
            int C = int.Parse(Console.ReadLine());
            
            M += C;
            
            if(M >= 60) {
                H += M / 60;
                if(H >= 24)
                    H -= 24;
                M = M % 60;
            }
            
            Console.WriteLine("{0} {1}", H, M);
        }
    }
}