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
            int C = int.Parse(str[2]);
            int result = 0;
            
            if(H == M && M == C)
                result = 10000 + H * 1000;
            else if(H == M || H == C)
                result = 1000 + H * 100;
            else if(M == C)
                result = 1000 + M * 100;
            else
                result = ((H > M ? H : M) > C ? (H > M ? H : M) : C) * 100;
            
            Console.WriteLine(result);
        }
    }
}