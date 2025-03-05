using System;
using System.Text;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            string[] str = Console.ReadLine().Split();
            int N = int.Parse(str[0]);
            int X = int.Parse(str[1]);
            string[] nums = Console.ReadLine().Split();
            StringBuilder answer = new StringBuilder();
            for (int i = 0; i < N; ++i)
                if(X > int.Parse(nums[i]))
                    answer.Append(nums[i] + " ");
            Console.WriteLine(answer.ToString());
        }
    }
}