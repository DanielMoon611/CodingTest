using System;

class Program {
    static void Main(string[] args) {
        int[] students = new int[30];
        int input = 0;
        
        for (int i = 0; i < 28; ++i) {
            input = int.Parse(Console.ReadLine());
            students[input - 1] = input;
        }
        
        for (int j = 0; j < students.Length; ++j) {
            if (students[j] == 0)
                Console.WriteLine(j + 1);
        }
    }
}