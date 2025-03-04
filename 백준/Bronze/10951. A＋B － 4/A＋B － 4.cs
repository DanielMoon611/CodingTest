using System;

class Program
{
    static void Main()
    {
        string input;
        while ((input = Console.ReadLine()) != null)
        {
            string[] numbers = input.Split();
            if (numbers.Length == 2 && int.TryParse(numbers[0], out int a) && int.TryParse(numbers[1], out int b))
            {
                Console.WriteLine(a + b);
            }
        }
    }
}