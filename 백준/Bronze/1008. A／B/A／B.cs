using System;

class Program {
    static void Main(string[] args) {
        string[] str = Console.ReadLine().Split();
        Console.WriteLine(double.Parse(str[0]) / double.Parse(str[1]));
    }
}