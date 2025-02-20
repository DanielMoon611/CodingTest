using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int N = int.Parse(Console.ReadLine());
            int answer = 0;
            
            for(int i = 1; i <= N; ++i)
                answer += i;
            
            Console.WriteLine("{0}", answer);
        }
    }
}