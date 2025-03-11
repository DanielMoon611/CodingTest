using System;

namespace CsTutorial {
    class Program {
        static void Main(string[] args) {
            int[] arr = new int[9];
            int size = arr.Length;
            int max = 0;
            int index = 0;
            for(int i = 0; i < size; ++i) {
                arr[i] = int.Parse(Console.ReadLine());
                if(max < arr[i]) {
                    max = arr[i];
                    index = i + 1;
                }
            }
            Console.WriteLine("{0}\n{1}", max, index);
        }
    }
}