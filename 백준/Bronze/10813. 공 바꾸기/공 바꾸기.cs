using System;

class Program {
    static void Main() {
        string[] inputs = Console.ReadLine().Split();
        int N = int.Parse(inputs[0]);
        int M = int.Parse(inputs[1]);
        int[] arr = new int[N];
        
        for (int x = 0; x < N; x++)
            arr[x] = x + 1;

        for (int y = 0; y < M; y++) {
            string[] swapInputs = Console.ReadLine().Split();
            int i = int.Parse(swapInputs[0]);
            int j = int.Parse(swapInputs[1]);

            int temp = arr[i - 1];
            arr[i - 1] = arr[j - 1];
            arr[j - 1] = temp;
        }

        Console.WriteLine(string.Join(" ", arr));
    }
}
