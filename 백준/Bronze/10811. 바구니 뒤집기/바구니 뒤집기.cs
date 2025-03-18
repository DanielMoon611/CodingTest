using System;

class Program {
    static void Main() {
        string[] input = Console.ReadLine().Split();
        int N = int.Parse(input[0]);
        int M = int.Parse(input[1]);

        int[] arr = new int[N];
        for (int x = 0; x < N; ++x)
            arr[x] = x + 1;

        for (int y = 0; y < M; ++y) {
            string[] swapInput = Console.ReadLine().Split();
            int i = int.Parse(swapInput[0]) - 1;
            int j = int.Parse(swapInput[1]) - 1;
            
            while (i < j) {
                int tmp = arr[i];
                arr[i++] = arr[j];
                arr[j--] = tmp;
            }
        }

        Console.WriteLine(string.Join(" ", arr));
    }
}