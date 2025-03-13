using System;

class Program {
    static void Main() {
        string[] inputs = Console.ReadLine().Split();
        int N = int.Parse(inputs[0]);
        int M = int.Parse(inputs[1]);
        int[] arr = new int[N];
        
        for (int index = 0; index < M; index++) {
            string[] command = Console.ReadLine().Split();
            int i = int.Parse(command[0]);
            int j = int.Parse(command[1]);
            int k = int.Parse(command[2]);

            for (int x = i - 1; x < j; x++)
                arr[x] = k;
        }
        
        Console.WriteLine(string.Join(" ", arr));
    }
}
