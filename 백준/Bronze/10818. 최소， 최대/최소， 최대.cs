using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int N = int.Parse(Console.ReadLine());
            string[] nums = Console.ReadLine().Split();
            int[] num = new int[N];
            for (int i = 0; i < N; ++i)
                num[i] = int.Parse(nums[i]);
            Array.Sort(num);
            Console.WriteLine("{0} {1}", num[0], num[N-1]);
        }
    }
}