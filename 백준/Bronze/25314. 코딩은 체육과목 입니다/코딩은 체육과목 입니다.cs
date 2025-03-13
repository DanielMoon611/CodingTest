using System;

class Pragram {
    static void Main(string[] args) {
        int N = int.Parse(Console.ReadLine());
        N /= 4;
        for (int i = 0; i < N; ++i)
            Console.WriteLine("long");
        Console.WriteLine("int");
    }
}