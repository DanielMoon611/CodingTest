using System;

class Program {
    static void Main() {
        bool[] arr = new bool[42];
        int result = 0;

        for (int i = 0; i < 10; i++) {
            int num = int.Parse(Console.ReadLine());
            int temp = num % 42;

            if (!arr[temp]) {
                arr[temp] = true;
                result++;
            }
        }

        Console.WriteLine(result);
    }
}