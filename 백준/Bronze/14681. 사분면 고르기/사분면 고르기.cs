using System;

class Program {
    static void Main(string[] args) {
        int X = int.Parse(Console.ReadLine());
        int Y = int.Parse(Console.ReadLine());
        if(X > 0) {
            if(Y > 0)
                Console.WriteLine("1");
            else
                Console.WriteLine("4");
        } else {
            if(Y > 0)
                Console.WriteLine("2");
            else
                Console.WriteLine("3");
        }
    }
}
